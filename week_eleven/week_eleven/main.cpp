//
//  main.cpp
//  week_eleven
//
//  Created by Niklas on 29.11.18.
//  Copyright © 2018 Niklas. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

struct House {string address;};
struct Person {
    string name;
    House *house;
};

//typedef int (*int_func)(int, int);
typedef std::function<int(int, int)> int_func;

int add(int x, int y);
int divy(int x, int y);
int function_pntr(int x, int y, std::function<int(int, int)> func);
int function_pntr_2(int x, int y, int_func func);

void ref_ptr_exp();
void house_ref_exp();

int main(int argc, const char * argv[]) {
//    ref_ptr_exp();
//    house_ref_exp();
    
    
    int res = function_pntr(2, 3, add);
    cout << res << endl;
    
    
    int res2 = function_pntr(10, 2, divy);
    cout << res2 << endl;
    
    
    int res3 = function_pntr_2(5, 3, add);
    cout << res3 << endl;
    
    
    int res4 = function_pntr_2(16, 2, divy);
    cout << res4 << endl;
    
    int my_int(3);
    
    int_func my_lambda = [&my_int](int y, int z) {return my_int + y + z;};
    
    cout << my_lambda(4, 5) << endl;
    
    cout << function_pntr_2(4, 5, my_lambda) << endl;


    return 0;
}

void ref_ptr_exp() {
    double val1(1);
    double val2(2);
    double val3(3);
    
    double *choice;
    
    double input;
    cout << "enter a  number: " << endl;
    cin >> input;
    
    if (input == val1) {choice = &val1;}
    else if (input == val2) {choice = &val2;}
    else {choice = &val3;}
    
    cout << "you're choice was: " << *choice << endl;
}

void house_ref_exp() {
    House house_1 {"london"};
    House house_2 {"Paris"};
    
    Person person_1 {"John", &house_1};
    Person person_2 {"Jen", &house_1};
    Person person_3 {"K", &house_2};
    
    cout << person_1.name << " lives in " << person_1.house->address << endl;
    cout << person_2.name << " lives in " << person_2.house->address << endl; //this is the same as:
    cout << person_3.name << " lives in " << (*(person_3.house)).address << endl; //this... (not practical in this case). The main point is (*a).b is eq: a->b

    person_1.house = &house_2;

    cout << person_1.name << " lives in " << person_1.house->address << endl;
    cout << person_2.name << " lives in " << person_2.house->address << endl;
    cout << person_3.name << " lives in " << person_3.house->address << endl;
}

int add(int x, int y) {
    return x + y;
}

int divy(int x, int y) {
    return x / y;
}

int function_pntr(int x, int y, std::function<int(int, int)> func) {
    return func(x, y);
}

int function_pntr_2(int x, int y, int_func func) {
    return func(x, y);
}


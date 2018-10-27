//
//  main.cpp
//  week_six
//
//  Created by Niklas on 27.10.18.
//  Copyright © 2018 Niklas. All rights reserved.
//

#include <iostream>

using namespace std;

int iterative_factorial(int n);
int recursive_factorial(int n);

bool prompt_user();

int recursive_fibonacci(int n);

bool not_and(bool a, bool b);
bool not2(bool a);
bool and2(bool a, bool b);
bool or2(bool a, bool b);



int main(int argc, const char * argv[]) {
//    while (prompt_user()) {
//        cout << iterative_factorial(5) << endl;
//        cout << recursive_factorial(5) << endl;
//    }
    
//    cout << recursive_fibonacci(7) << endl;
    
    cout << not2(false) << endl;
    cout << and2(true, true) << endl;
    cout << or2(false, false) << endl;
    
    return 0;
}

int iterative_factorial(int n) {
    int result(1);
    
    for (int i(n); i > 0; --i) {
        result *= i;
    }
    
    return result;
}

int recursive_factorial(int n) {
    return (n < 1) ? 1 : n * recursive_factorial(n - 1);
}

bool prompt_user() {
    string response("");
    
    cout << "Would you like to start again [y/n]?" << endl;
    cin >> response;
    
    return (response == "y") ? true : false;
}

int recursive_fibonacci(int n) {
    return (n < 2) ? n : recursive_fibonacci(n - 1) + recursive_fibonacci(n - 2);
}

bool not_and(bool a, bool b) {
    return not(a and b);
}

bool not2(bool a) {
    return not_and(a, true);
}

bool and2(bool a, bool b) {
    return not2(not_and(a, b));
}

bool or2(bool a, bool b) {
    return not2(and2(not2(a), not2(b)));
}

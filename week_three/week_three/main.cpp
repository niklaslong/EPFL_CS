//
//  main.cpp
//  week_three
//
//  Created by Niklas on 04.10.18.
//  Copyright © 2018 Niklas. All rights reserved.
//

#include <iostream>

using namespace std;

int integer_test() {
    cout << "enter an integer" << endl;
    int n;
    cin >> n;
    
    if (n == 0) {
         cout << "number 0 and is even";
    } else if (n > 0 && n % 2 == 0) {
        cout << "number is positive and even";
    } else if (n < 0 && n % 2 == 0) {
        cout << "number is negative and even";
    } else if (n > 0 && n % 2 != 0) {
        cout << "number is positive and uneven";
    } else {
        cout << "number is negative and uneven";
    }
    return 0;
}

int simple_interval() {
    cout << "enter a real number" << endl;
    double x;
    cin >> x;
    
    if (x < 1 && x >= -1) {
        cout << "your number belongs to I [-1; 1[";
    } else {
        cout << "your number doesn't belong to I [-1; 1[";
    }
    return 0;
}

int complex_interval() {
    cout << "enter a real number" << endl;
    double x;
    cin >> x;
    
    if ((x < 3 && x >= 2) || (x <= 1 && x > 00) || (x <= -2 && x >= -10)) {
        cout << "your number belongs to I";
    } else {
        cout << "your number doesn't belong to I";
    }
    
    return 0;
}

int main(int argc, const char * argv[]) {
//    integer_test();
//    simple_interval();
    complex_interval();
    
    return 0;
}



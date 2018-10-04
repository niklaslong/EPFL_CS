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
    
    if (n > 0 && n % 2 == 0) {
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

int main(int argc, const char * argv[]) {
    integer_test();
    
    return 0;
}



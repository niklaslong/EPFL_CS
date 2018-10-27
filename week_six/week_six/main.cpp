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

int main(int argc, const char * argv[]) {
    while (prompt_user()) {
        cout << iterative_factorial(5) << endl;
        cout << recursive_factorial(5) << endl;
    }
    
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

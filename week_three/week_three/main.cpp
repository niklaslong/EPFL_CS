//
//  main.cpp
//  week_three
//
//  Created by Niklas on 04.10.18.
//  Copyright © 2018 Niklas. All rights reserved.
//

#include <iostream>
#include <cmath>

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

int formulas() {
    cout << "enter a real number" << endl;
    double x;
    cin >> x;
    
    double func1 = x / (1 - exp(x));
    double func2 = x * log(x) * exp(2 / (x - 1));
    double func3 = (-x - sqrt(pow(x, 2) - (8 * x))) / (2 - x);
    double func4 = sqrt(sin(x) - x / 20) * log(pow(x, 2)) - (1 / x);
    
    if (x != 0) {
        cout << func1 << endl;
    } else {
        cout << "indefinie" << endl;
    }
    
    if (x > 0 && x != 1) {
        cout << func2 << endl;
    } else {
        cout << "indefinie" << endl;
    }
    
    if (x <= 0 || x >= 8) {
        cout << func3 << endl;
    } else {
        cout << "indefinie" << endl;
    }
    
    if (x != 3) {
        cout << func4 << endl;
    } else {
        cout << "indefinie" << endl;
    }
    
    return 0;
}

int cubed_formula() {
    cout << "enter a a0, a1, a2" << endl;
    double a0, a1, a2;
    cin >> a0 >> a1 >> a2;
    
    double z1, z2, z3;
    
    double Q = ((3 * a1) - pow(a2, 2)) / 9.0;
    double R = ((9 * a2 * a1) - (27 * a0) - (2 * pow(a2, 3))) / 54.0;
    double D = pow(Q, 3) + pow(R, 2);
    
    if (D < 0) {
        double ang = acos(R / sqrt(pow(-Q, 3)));
        z1 = 2 * sqrt(-Q) * cos(ang / 3.0) - (a2 / 3.0);
        z2 = 2 * sqrt(-Q) * cos((ang + 2 * M_PI) / 3.0) - (a2 / 3.0);
        z3 = 2 * sqrt(-Q) * cos((ang + 4 * M_PI) / 3.0) - (a2 / 3.0);

        cout << z1 << " " << z2 << " " << z3 << endl;
    } else {
        double S = cbrt(R + sqrt(D));
        double T = cbrt(R - sqrt(D));
        
        if (D == 0 &&  (S + T) != 0) {
            z1 = (-a2 / 3) + (S + T);
            z2 = (-a2 / 3) - (S + T);
            
            cout << "two solutions: " << z1 << " " << z2 << endl;
        } else {
            z1 = (-a2 / 3) + (S + T);
            
            cout << "unique solution: " << z1 << endl;
        }
        
    }
    
    
 
    
    return 0;
}



int main(int argc, const char * argv[]) {
    integer_test();
    simple_interval();
    complex_interval();
    formulas();
    cubed_formula();
    
    return 0;
}



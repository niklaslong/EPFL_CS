//
//  main.cpp
//  week_four
//
//  Created by Niklas on 10.10.18.
//  Copyright © 2018 Niklas. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int tables() {
    for (int i(2); i <= 10; ++i) {
        cout << i << " times table." << endl;
        for (int j(1); j <= 10; ++ j) {
            cout << j << " * " << i << " = " << j * i << endl;
        }
    }
    return 0;
}

int rebounds() {
    constexpr double G(9.81);
    
    double h(-1);
    double eps(-1);
    
    int nbr(-1);
    
    while (h <= 0) {
        cout << "enter h." << endl;
        cin >> h;
    }
    
    while (nbr <= 0) {
        cout << "enter nbr." << endl;
        cin >> nbr;
    }
    
    while (eps < 0 || eps > 1) {
        cout << "enter eps." << endl;
        cin >> eps;
    }
    
//    Mathyness starts here!
    
    double v;
    double v1;
    
    for (int i(nbr); i > 0; --i) {
        v = sqrt(2 * h * G);
        v1 = eps * v;
        h = (pow(v1, 2) / (2 * G));
    }

    cout << "h: " << h << endl;
    
    return 0;
}

int main(int argc, const char * argv[]) {
//    tables();
    rebounds();
    return 0;
}

//
//  main.cpp
//  control_structures
//
//  Created by Niklas on 26.09.18.
//  Copyright © 2018 Niklas. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
//    int n(2);
    
    int c;
    
    cout << "enter a num" << endl;

    if (!(cin >> c)) {
        cout << "enter an int";
    } else {
        cout << "yay";
    }
    
//    if (n > 5) {
//        cout << "This won't get run as " << n << " < 5" << endl;
//    } else {
//        cout << "This will get run as " << n << " < 5" << endl;
//    }
    
//    cout << "  x  " << endl;
//    cout << " xxx " << endl;
//    cout << "xxxxx" << endl;
    return 0;
}

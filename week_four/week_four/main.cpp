//
//  main.cpp
//  week_four
//
//  Created by Niklas on 10.10.18.
//  Copyright © 2018 Niklas. All rights reserved.
//

#include <iostream>

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

int main(int argc, const char * argv[]) {
    tables();
    return 0;
}

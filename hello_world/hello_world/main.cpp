//
//  main.cpp
//  hello_world
//
//  Created by Niklas on 15.09.18.
//  Copyright © 2018 Niklas. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    //    var initialisation is the same for built in types.
    //    ex: int x(1); is identical to int x = 1; as int is a built in type.
    int x(1);
    double y = 2.3;
    string z("chocolate");
    string w = "no pain, no gain";
    
    std::cout << "x is: " << x << std::endl;
    std::cout << "y is: " << y << std::endl;
    std::cout << "z is: " << z << std::endl;
    std::cout << "w is: " << w << std::endl;

    
    cout << "Hello, World!\n";
    return 0;
}

//
//  main.cpp
//  hello_world
//
//  Created by Niklas on 15.09.18.
//  Copyright © 2018 Niklas. All rights reserved.
//

#include <iostream>
#include "math.hpp"
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
    
    //    this also works as we are using namespace std:
    cout << "Hello, World!\n";
    cout << "w is: " << w << endl;
    
    //    command line args can be read like this:
    //    seems like if we try to access argv[2], an error is thrown as the data doesn't exist;
    cout << "argv is: " << argv[1] << endl;
    
    //    argc stores the length of argv:
    cout << "argc is: " << argc << endl;
    
    int a = add(2, 3);
    
    cout << "a is: " << a << endl;
    
    return 0;
}

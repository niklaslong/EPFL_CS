//
//  main.cpp
//  hello_world
//
//  Created by Niklas on 15.09.18.
//  Copyright © 2018 Niklas. All rights reserved.
//

#include <iostream>
#include <cmath>
#include "math.hpp"
using namespace std;

int main(int argc, const char * argv[]) {

    // var initialisation is the same for built in types.
    // ex: int x(1); is identical to int x = 1; as int is a built in type.
    int x(1);
    unsigned int pos_int(4);
    double y = 2.3;
    double bignum = 2e10;
    string z("chocolate");
    string w = "no pain, no gain";
    
    std::cout << "x is: " << x << std::endl;
    std::cout << "y is: " << y << std::endl;
    std::cout << "z is: " << z << std::endl;
    std::cout << "bignum is: " << bignum << std::endl;
    std::cout << "pos_int is: " << pos_int << std::endl;
    
    // the / operator accepts both int and double types
    // if one of the inputs is a double, the output will be a double:
    cout << "y / 2 = " << y / 2 << endl;
    cout << "3 / 2.0 = " << 3 / 2.0 << endl;
    // if both are int, the output will be an int
    cout << "x / pos_int = " << x / pos_int << endl;
    
    
    // this also works as we are using namespace std:
    cout << "Hello, World!\n";
    cout << "w is: " << w << endl;
    
    // command line args can be read like this:
    // seems like if we try to access argv[2], an error is thrown as the data doesn't exist;
    cout << "argv is: " << argv[1] << endl;
    
    // argc stores the length of argv:
    cout << "argc is: " << argc << endl;
    
    int a = add(2, 3);
    
    cout << "a is: " << a << endl;
    
    cout << "enter a value for n: " << endl;
    
    // initialise var n;
    int n;
    // store the result of cin in n, >> is input operator
    // the bitwise operator >> has been given a new meaning as it's being used in conjunction with cin (like the output operator << with cout).
    // this is called operator overloading.
    cin >> n;
    cout << "n is: " << n << endl;
    
    // initialise multiple vars of the same type:
    int n1, n2, n3;
    
    // get input three times and store in three vars, eq to:
    // cin >> n1; cin >> n2; cin >> n3;
    cin >> n1 >> n2 >> n3;
    
    cout << n1 << n2 << n3 << endl;
    
    // % (modulo) exists only for int.
    cout << x % 2 << endl;
    
    // +=, -=, *=, and /= are equivalent to ex: x = x + 1; x = x * 1; etc...
    x = 1;
    x += 1;
    cout << x << endl;
    
    // eq to x = x + 1; --x also exists;
    x = 1;
    ++x;
    cout << x << endl;
    
    // M_PI (pi) is defined by the compiler (not in std library)
    // M_E (euler number) is also defined in compiler
    double alpha(10 * M_PI / 180);
    
    cout << "sin of 10 degrees is: " << sin(alpha) << endl;
    
    int v(3);
    double f(4.0), g(10.0);
    
    f = g / v;
    cout << f << endl;
    
    return 0;
}

//
//  main.cpp
//  exam-reference
//
//  Created by Niklas on 16.12.18.
//  Copyright © 2018 Niklas. All rights reserved.
//

/*
 To cover:
 
 - variable declaration and scope
 - Control structures: if, for, while
 - Functions
 - std::vector(dynamic - heap), std::array(static - size known at compile time - stack)
 - strings
 - structs
 - references/pointers
 - io
 
 */

#include <iostream>

int main(int argc, const char * argv[]) {

/*
 VARIABLE DECLARATION:
 
    type identifier;
 
 TYPES:
 
    int - integer
    double - float
    char - character, uses '' (single quote)
    void - no storage, mostly used as a function return type
    bool - boolean value, either true or false
 
    std::string - covered lower
    std::array - covered lower - static, size known at compile time, stored on stack
    std::vector - covered lower - dynamic, size not known at compile time, stored on heap
 
 BEST PRACTICES:
 
    Declare variables as close to their place of use as possible.
    Declare variables with initial values when possible.
    Make variables constant where possible.
 
*/
    int my_int(3);
    double my_double(3); // will actually be 3.0
    
    const char my_cst_char('c'); // const is evaluated at run-time - can change value
    constexpr bool my_cst_bool(true); // constexpr is evaluated at compile-time - hardcoded
}

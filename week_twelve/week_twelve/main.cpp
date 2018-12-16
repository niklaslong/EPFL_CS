//
//  main.cpp
//  week_twelve
//
//  Created by Niklas on 06.12.18.
//  Copyright © 2018 Niklas. All rights reserved.
//

#include <iostream>
#include <fstream> //gives access to two new types (ifstream, ofstream)
#include <iomanip> //adds manipulators for io (hex, dec, ..., setprecision(i), setw(int), setfill(char), ...)
#include <string>
#include <cstdlib> // for exit()
using namespace std;

//ifstream is input stream (reads from file)
//ofstream is output stream (writes to file)

int write();

int main(int argc, const char * argv[]) {
    write();
    
    return 0;
}

int write() {
    using namespace std;
    
    // ofstream is used for writing files
    // We'll make a file called Sample.dat
    ofstream outf("Sample.dat");
    
    // If we couldn't open the output file stream for writing
    if (!outf)
    {
        // Print an error and exit
        cerr << "Uh oh, Sample.dat could not be opened for writing!" << endl;
        exit(1);
    }
    
    // We'll write two lines into this file
    outf << "This is line 1" << endl;
    outf << "This is line 2" << endl;
    
    return 0;
    
    // When outf goes out of scope, the ofstream
    // destructor will close the file
}

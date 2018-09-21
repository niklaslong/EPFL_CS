//
//  main.cpp
//  num_search
//
//  Created by Niklas on 21.09.18.
//  Copyright © 2018 Niklas. All rights reserved.
//

#include <iostream>

using namespace std;

// instruction can be 0: initial, 1: true, 2: false-smaller, 3: false-larger

int main(int argc, const char * argv[]) {
    cout << "choose a number greater than 2" << endl;
    
    int max(20);
    int num(17);
    int guess;
    
    cout << "guessing" << endl;
    
    guess = max;
    
    cout << "is your number " << guess << "?" << endl;
    
    while (num != guess) {
        if (guess > num) {
            max = guess;
            guess /= 2;
        } else {
            guess = max - ((max - guess) / 2);
        }
    }
    
    cout << guess << "yay!";
    
    return 0;
}



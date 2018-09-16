//
//  main.cpp
//  week_one
//
//  Created by Niklas on 16.09.18.
//  Copyright © 2018 Niklas. All rights reserved.
//

#include <iostream>

using namespace std;

void age() {
    const int CURRENT_YEAR(2018);
    
    cout << "How old are you?" << endl;
    
    int age;
    cin >> age;
    
    cout << "You're birth year is: " << CURRENT_YEAR - age << endl;
}

int main(int argc, const char * argv[]) {
    age();
    return 0;
}

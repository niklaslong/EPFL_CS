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

double calculate_quantity(int guests, double base_quantity, double BASE) {
    return base_quantity * guests / BASE;
}

void fondue() {
    const int BASE(4);
    
    double cheese(800.0);
    double water(2.0);
    double garlic(2.0);
    double bread(400.0);
    
    cout << "How many guests are there?" << endl;
    
    int guests;
    cin >> guests;
    
    cout << "To make a fondue for " << guests << " people, you'll need:" << endl;
    cout << "- " << calculate_quantity(guests, cheese, BASE) << " gr of Vacherin fribourgeois" << endl;
    cout << "- " << calculate_quantity(guests, water, BASE) << " dl of water" << endl;
    cout << "- " << calculate_quantity(guests, garlic, BASE) << " bits of garlic" << endl;
    cout << "- " << calculate_quantity(guests, bread, BASE) << " gr of bread" << endl;
    cout << "- and of course some pepper" << endl;
}

void math_it_up() {
    double x, y, a, b, c, d;
    
    x = 2;
    y = 4;

    a = x + y;
    b = x - y;
    c = x * y;
    d = x / y;
    
    cout << "x + y = " << a << endl;
    cout << "x - y = " << b << endl;
    cout << "x * y = " << c << endl;
    cout << "x / y = " << d << endl;
}

int main(int argc, const char * argv[]) {
    age();
    fondue();
    math_it_up();
    
    return 0;
}

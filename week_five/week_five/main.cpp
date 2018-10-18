//
//  main.cpp
//  week_five
//
//  Created by Niklas on 16.10.18.
//  Copyright © 2018 Niklas. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int variable(10);

int scope();

int query_num(int min, int max);
int display_num();
bool validate_input(int min, int max, int num_input);

double min2(double x, double y);
double min3(double x, double y, double z);

int exchange(int &x, int &y);

void stars(int nb_stars);
void spaces(int nb_spaces);

int cluster(int lines);
int tree(int lines);
int print_line(int chars_per_line);

int euclidian_div(int a, int b);

int cosine(double x, int N);
double factorial(int k);
double partial_sum(double x, int N);



int main(int argc, const char * argv[]) {
//    scope();
//    display_num();
    
//  MIN2 and MIN3
//    cout << "The smallest is: " << min2(5, 7) << endl;
//    cout << "The smallest is: " << min3(5, 1, 2) << endl;

//  EXCHANGE
//    int i(10);
//    int j(55);
//
//    cout << "Avant: i=" << i << " et j=" << j << endl;
//    exchange(i,j);
//    cout << "Après: i=" << i << " et j=" << j << endl;
    
//    STARS
    
//    tree(10);
    
    
//    euclidian_div(654321, 210);
    
//    cosine(M_PI / 3, 100); 

    return 0;
}

int scope() {
    {
        int variable(5);
        cout << "Un, la variable vaut : " << variable << endl;
        //        var in scope here is defined in the bloc (5);
    }

    {
        cout << "Deux, la variable vaut : " << variable << endl;
        //        Here var in scope is global var (10);
    }

    for (int variable(0); variable < 3; variable++) {
        cout << "Trois, la variable vaut : " << variable << endl;
        //        Here var in scope is defined in the for loop;
    }

    cout << "Quatre, la variable vaut : " << variable << endl;
    //    Once again using global var;

    for (variable = 0; variable < 3; variable++) {
        cout << "Cinq, la variable vaut : " << variable << endl;
        //        Here we are actually reassigning the global var to 0;
    }

    cout << "Six, la variable vaut : " << variable << endl;
    //    As we redifined the global var in the for loop above, it is now (3);
    return 0;
}

bool validate_input(int min, int max, int num_input) {
    bool output;
    
    if (max <= min) {
        if (min <= num_input) { output = true; }
        else { output = false; }
    } else {
        if (min <= num_input && num_input <= max) { output = true; }
        else { output = false; }
    }
    
    return output;
}

int query_num(int min, int max) {
    int num_input;
    
    bool input_valid(false);
    
    do {
        cout << "please enter an integer: " << endl;
        cin >> num_input;
        
        input_valid = validate_input(min, max, num_input);
        
    } while(!input_valid);
    
    return num_input;
}

int display_num() {
    int max(7);
    int min(2);
    
    int num = query_num(min, max);
    
    cout << "Your num was: " << num;
    
    return 0;
}

double min2(double x, double y) {
    return (x < y) ? x : y;
}

double min3(double x, double y, double z) {
    return min2(min2(x, y), z);
}

int exchange(int &x, int &y) {
//    Don't overuse passing by reference!
    int tmp(x);
    
    x = y;
    y = tmp;
    
    return 0;
}

void stars(int nb_stars) {
    for(int i(0); i < nb_stars; ++i) {
        cout << '*';
    }
}

void spaces(int nb_spaces) {
    for(int i(0); i < nb_spaces; ++i) {
        cout << ' ';
    }
}

int chars_per_line(int line) {
    return 1 + 2 * (line - 1);
}

int print_line(int line, int chars_per_line) {
    //    scope resolution operator used to distinguish function in global scope and local var of same name;
    int nb_stars = ::chars_per_line(line);
    int nb_spaces = (chars_per_line - nb_stars) / 2;
    
    spaces(nb_spaces);
    stars(nb_stars);
    
    cout << endl;
    
    return 0;
}

int cluster(int lines, int chars_per_line, int offset) {
        for (int i(1); i <= 4; ++i) {
            print_line(i + offset, chars_per_line);
        }

    return lines;
}

int tree(int lines) {
    int chars_per_line = ::chars_per_line(lines);
    int lines_printed(0);
    int offset(0);
    
    for (int i(1); lines_printed < lines; ++i) {
        lines_printed += cluster(i + 2, chars_per_line, offset);
        
        offset += 2;
    }
    
    int nb_spaces = (chars_per_line - 3) / 2;
    spaces(nb_spaces);
    cout << "|||" << endl;
    
    return 0;
}

int modulo(int a, int b) {
    return a % b;
}

int euclidian_div(int a, int b) {
    int remainder;
    int division;
    int pgdc;
    
    int u(0);
    int prev_u(1);
    int next_u;
    
    int v(1);
    int prev_v(0);
    int next_v;
    
    do {
        remainder = a % b;
        division = a / b;
        pgdc = b;
        
        next_u = prev_u - u *(division);
        prev_u = u;
        u = next_u;
        
        next_v = prev_v - v *(division);
        prev_v = v;
        v = next_v;
        
        cout << "u: " << u << endl;
        cout << "v: " << v << endl;
        
        a = b;
        b = remainder;
    } while(remainder != 0);
    
    cout << "PGDC is :" << pgdc << endl;
    
    return 0;
}

int cosine(double x, int N) {
    
    double partial_sum = ::partial_sum(x, N);
    
    cout << "partial_sum is: " << partial_sum << endl;
    
    return 0;
}

double factorial(int k) {
    double fact(1);
    
    for (int i(1); i <= k; ++i) {
        fact *= i;
    }
    
    return fact;
}

double partial_sum(double x, int N) {
    double partial_sum(0.0);
    
    for (int i(0); i < N; ++i) {
        partial_sum += (pow(-1, i) * pow(x, 2*i)) / factorial(2*i);
    }

    return partial_sum;
}

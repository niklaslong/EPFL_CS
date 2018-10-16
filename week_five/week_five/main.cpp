//
//  main.cpp
//  week_five
//
//  Created by Niklas on 16.10.18.
//  Copyright © 2018 Niklas. All rights reserved.
//

#include <iostream>

using namespace std;

int variable(10);

int scope();
int query_num(int min, int max);
int display_num();
bool validate_input(int min, int max, int num_input);

int main(int argc, const char * argv[]) {
//    scope();
    display_num();
    
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

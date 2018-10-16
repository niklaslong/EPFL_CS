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

int main(int argc, const char * argv[]) {
    // insert code here...
    scope();
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

//
//  main.cpp
//  Assignment 6
//
//  Created by Alvin Teng on 9/13/17.
//  Copyright © 2017 AT. All rights reserved.
//

#include <iostream>

int main() {
    // insert code here...
    using namespace std;
    int input = -1;
    char quit = 'a';
    
    while(quit != 'q')
    {
        while(input < 0)
        {
            cout << "Type a number: ";
            cin >> input;
        }
        
        if (input%2 == 0)
        {
            cout << "Your number is EVEN.\n";
        } else {
            cout << "Your number is ODD.\n";
        }
        cout << "Type anything for another number or type 'q' to quit: ";
        cin >> quit;
    }
    
    
    return 0;
}

//
//  main.cpp
//  Assignment 8
//
//  Created by Alvin Teng on 9/20/17.
//  Copyright © 2017 AT. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int input, guess, found = 0, count = 0;
    
    cout << "Enter a number: ";
    cin >> input;
    cout << "What is your guess for how many prime numbers are between 0-" << input << ": ";
    cin >> guess;
    cout << "Prime Numbers between 0-" << input << ": ";
    
    for (int i = 0; i <= input; i++)
    {
        count = 0;
        for (int j = 2; j < i; j++)
        {
            if(i%j == 0)
                count++;
        }
        if (count == 0 && i != 1)
        {
            cout << i << ", ";
            found++;
        }
    }
    
    if(found == guess)
    {
        cout << endl << "You are correct!\n";
    } else {
        cout << endl << "You are wrong, there are " << found << " prime numbers.\n";
    }
    return 0;
}

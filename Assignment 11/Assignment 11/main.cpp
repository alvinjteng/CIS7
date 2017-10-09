//
//  main.cpp
//  Assignment 11
//
//  Created by Alvin Teng on 10/4/17.
//  Copyright © 2017 AT. All rights reserved.
//

#include <iostream>
using namespace std;
bool checkNeg(int input);

int main() {
    int input1, input2;
    
    cout << "Enter a positive number: ";
    cin >> input1;
    cout << "Enter another positive number: ";
    cin >> input2;
    
    if (checkNeg(input1) == true && checkNeg(input2) == true){
        cout << input1 << ", " << input2 << endl;
    } else if (input1 < 0 && input2 < 0) {
        while (checkNeg(input1) == false || checkNeg(input2) == false) {
            cout << "You did not enter a positive integer.\n";
            cout << "Enter another positive number: ";
            cin >> input1;
            cout << "Enter your second positive number: ";
            cin >> input2;
        }
        cout << input1 << ", " << input2 << endl;
    } else {
        if (checkNeg(input1) == false) {
            cout << "Your first number is negative, enter a positive number: ";
            cin >> input1;
            while (checkNeg(input1) == false) {
                cout << "Your number is still negative, try again: ";
                cin >> input1;
            }
        }
        if (checkNeg(input2) == false) {
            cout << "Your second number is negative, enter a positive number: ";
            cin >> input2;
            while (checkNeg(input2) == false) {
                cout << "Your number is still negative, try again: ";
                cin >> input2;
            }
        }
        cout << input1 << ", " << input2 << endl;
    }
    return 0;
}

bool checkNeg(int input) {
    if (input >= 0)
        return true;
    return false;
}

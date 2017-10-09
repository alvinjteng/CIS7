//
//  main.cpp
//  Assignment 10
//
//  Created by Alvin Teng on 9/28/17.
//  Copyright © 2017 AT. All rights reserved.
//

#include <iostream>
using namespace std;
int gcdFunc(int inp1, int inp2);

int main() {
    int firstNum, secondNum, mod1, mod2, smallNum, gcd = 0;
    
    cout << "Enter your first positive number: ";
    cin >> firstNum;
    cout << "Enter your second positive number: ";
    cin >> secondNum;
    
    smallNum = min(firstNum, secondNum);
    for (int i = 1; i <= smallNum; i++){
        mod1 = firstNum % i;
        mod2 = secondNum % i;
        if (mod1 == 0 && mod2 == 0) {
            gcd = i;
        }
    }
    cout << gcd << endl;
    
    int gcda = gcdFunc(firstNum, secondNum);
    cout << gcda << endl;
    
    return 0;
}

int gcdFunc(int inp1, int inp2)
{
    if (inp2 == 0)
        return inp1;
    
    return gcdFunc(inp2, inp1 % inp2);
}

//
//  tower.hpp
//  Towers of Hanoi (Assignment 12?)
//
//  Created by Alvin Teng on 10/11/17.
//  Copyright © 2017 AT. All rights reserved.
//

#ifndef tower_hpp
#define tower_hpp

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class tower {
public:
    string name;
    vector<int> disk;
    void printNum(){
        for (int i = 0; i < disk.size(); i++)
            cout << name << ": " << disk[i] << endl;
    }
};

#endif /* tower_hpp */

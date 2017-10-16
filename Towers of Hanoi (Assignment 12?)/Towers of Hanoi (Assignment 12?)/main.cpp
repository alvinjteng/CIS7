//
//  main.cpp
//  Towers of Hanoi (Assignment 12?)
//
//  Created by Alvin Teng on 10/9/17.
//  Copyright © 2017 AT. All rights reserved.
//

#include "tower.hpp"

void moveDisk(int disk, tower a, tower b, tower c);
void printTowers(tower a, tower b, tower c);

int main() {
    int disks;
    tower::tower a, b, c;
    a.name = "Start Tower";
    b.name = "End Tower";
    c.name = "Aux. Tower";
    
    cout << "How many disks are there? ";
    cin >> disks;
    for (int i = 0; i < disks; i++)
        a.disk.push_back(i+1);
    
    moveDisk(disks, a, b, c);
}

void moveDisk(int disk, tower a, tower b, tower c) {
    int dPop;
    if (disk == 1) {
        cout << "Move " << disk << " from " << a.name << " to " << b.name << ". " << endl;
        if (a.disk.size() > 0) {
            dPop = a.disk.back();
            a.disk.pop_back();
            b.disk.push_back(dPop);
        }
        printTowers(a, b, c);
        return;
    }
    moveDisk(disk - 1, a, c, b);
    cout << "Move " << disk << " from " << a.name << " to " << b.name << endl;
    if (a.disk.size() > 0) {
        dPop = a.disk.back();
        a.disk.pop_back();
        b.disk.push_back(dPop);
    }
    printTowers(a, b, c);
    moveDisk(disk - 1, c, b, a);
}

void printTowers(tower a, tower b, tower c) {
    a.printNum();
    b.printNum();
    c.printNum();
}


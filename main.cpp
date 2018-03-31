/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: anthony
 *
 * Created on March 18, 2018, 3:59 PM
 */

#include <iostream>
#include <Square.h>

using namespace std;

/*
 * 
 */
int main() 
{
    Square _mySquare(4);
    cout << "Area: " << _mySquare.GetArea() << endl;
    cin.get();
    return 0;
}



// File: functionsStruct.cpp

// Created by Joshua Stammen on 9/14/2017 for CS1410.


// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
// Task : Create a function that displays the
// x and y coordinate of a point

// Constants
struct Point
{
    float x;
    float y;
};


// Prototypes
//The prototypes MUST be define AFTER
//the structs
void DisplayPoint (struct Point p);



// Main Program Program

int main(void) {

    Point first ={2,8};
    DisplayPoint(first);
    Point second = {5,8};
    DisplayPoint(second);

    return 0;

}
// Function Definitions
void DisplayPoint (struct Point p)
{
    cout << " x = " << p.x << endl;
    cout << " y = " << p.y << endl;
}
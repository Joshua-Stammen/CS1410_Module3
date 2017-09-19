// File: Point.cpp

// Created by Joshua Stammen on 9/19/2017 for CS1410.
// Copyright (c) 2017 WSU
//

#include <iostream>

using namespace std;

// Constants
const int Max_x = 10;
const int Max_y = 10;
const float IN_CM = 2.54;

struct Point
{
    float x;  //x-coordinate
    float y;  //y-coordinate
};
// Prototypes
void ShowPoint(const struct Point &p );
void UpdatePoint (struct Point &p);
struct Point CreatePoint ();
struct Point CreatePointValues(float x =0.0 , float y = 0.0);
//Incline functions
inline float InchesToCm(float val) {return val *IN_CM;};

// Main Program Program

int main()
    {
        Point p1 = {2.5, 3.1};
        Point p2;
        Point p3;
        ShowPoint(p1);
        UpdatePoint(p1);
        ShowPoint(p1);

        p2 = CreatePoint();
        ShowPoint(p2);

        p3 = CreatePointValues(1.5, 7.9);
        ShowPoint(p3);

        p3 = CreatePointValues();
        ShowPoint(p3);

        p3.x = InchesToCm(1.5);
        ShowPoint(p3);

        return 0;





    return 0;

}
// Function Definitions
//Take a constant address of a
//Structure point.
// You cannot modify the content of the structure

void ShowPoint(const struct Point &p) {
    cout << "X - coordinate is: " << p.x << endl;
    cout << "Y - coordinate is: " << p.y << endl;
}
void UpdatePoint(struct Point &p){
     //Update x and y by incrementing their value
    // by 1
    p.x += 1.0;
    p.y += 1.0;
}
struct Point CreatePoint()
{
    Point p;
    p.x = 0.0;
    p.y = 0.0;

    return p;
}
//Take two Optional input values. If no values are
//provided, use the Default values to initialized
// the parameters
// Only on the prototype.
struct Point CreatePointValues(float x, float y)
{
    Point p;
    p.x = x;
    p.y = y;

    return p;
}
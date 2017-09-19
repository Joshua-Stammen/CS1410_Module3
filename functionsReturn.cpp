

// File: functionsReturn.cpp

// Created by Joshua Stammen on 9/14/2017 for CS1410.
// Copyright (c) 2017 WSU
//Task : Define a function that takes one
//input parameter (integer), it increments the value
//by one, and it returns the new value to user

//


#include <iostream>

using namespace std;

// Constants


// Prototypes
int IncrementInt(int i); // an integer
void ReallyIncrementInt(int &i); // an address of an integer


// Main Program

int main() {
    int num1 = 0;
    int num2 = 0;
    cout << "num 1 :  " << num1 << endl;
    num2 = IncrementInt(num1);
    cout << "num 2 :  " << num2 << endl;

    cout << "Address of num: " << &num1 <<endl;
    ReallyIncrementInt(num1);
    cout << " Num is " << num1 << endl;


    return 0;

}
// Function Definitions
//Passing parameters by value
int IncrementInt(int i)
{
    cout << "Address of i inside IncrementInt "<< i <<endl;
    i++;
   return i;
}

//Increment original integer
//by 1. Passing parameter by
// reference(pass address)
void ReallyIncrementInt(int &i)
{
    cout << "Address of i inside ReallyIncrementInt "<< &i << endl;
    return;
}
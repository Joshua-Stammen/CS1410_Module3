#include <iostream>
using namespace std;

//Task: define a function that takes two
// Floats as input parameters and it displays
//Their sum, difference, and product
void Arithmetic(float f1, float f2);

//main program
int main()
{
    char answer;
    float num1,num2;
    do{
        cout << "Enter two numbers :";
        cin >> num1 >> num2;
        Arithmetic(num1, num2);
        cout << "Do you want to do it again [y/n]?";
        cin >> answer;

        } while(answer != 'n');
        return 0;
    }

//Function Definition
void Arithmetic(float f1, float f2) {
    cout << "Sum is " << f1 + f2 << endl;
    cout << "Product is " << f1 - f2 << endl;
    cout << "Difference is " << f1*f2 << endl;
}
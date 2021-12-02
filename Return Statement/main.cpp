#include <iostream>
#include <cmath>
using namespace std;

double cube(double num)
{
    double result = pow(num, 3);
    return result;
}
int main()
{
    double number, returnedValue;
    cout << "Give a number: ";
    cin >> number;
    returnedValue = cube(number);
    cout << returnedValue;
    return 0;
}

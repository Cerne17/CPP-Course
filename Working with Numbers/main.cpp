#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    cout << 10 % 3 << endl; ///modular operation :)
    cout << 4 + 5 * 10 << endl; /// C++ has the order of operations included
    int wnum = 5;
    double dnum = 5.5;

    wnum++;

    cout << wnum;

    wnum+=80;

    cout << wnum;

    cout << 5.5 + 9; ///operations with one integer and a double or float gives back a double or float

    ///Using cmath

    cout << pow(2,5);

    cout << sqrt(36);

    cout << round(34.4);

    cout << ceil(3.1);

    cout << floor(3.8);

    cout << fmax(3,10); ///tells the bigger number

    cout << fmin(3,10); ///tells the smaller number
    return 0;
}

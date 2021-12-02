#include <iostream>

using namespace std;

///More If statements
double getMax(double num1, double num2, double num3){
    double result;
    if (num1 >= num2 && num1 >= num3){
        result = num1;
    }else if(num2 > num1 && num2 > num3){
        result = num2;
    }else{
        result = num3;
    }
    return result;
}

int main()
{
    ///&& -> and operator
    /// || -> or operator

    bool isMale = true;
    bool isTall = false;

    if(isMale && isTall){
        cout << "Is a Tall Male!" << endl;
    } else if(isMale && !isTall){
        cout << "Is a Short Male!" << endl;
    } else if(!isMale && isTall){
        cout << "Is a non Male that is Tall!" << endl;
    }else{
        cout << "Is nor Tall neither Male!" << endl;
    };

    ///More If Statements

    cout << getMax(1, 1, 7) << endl;

    return 0;
}

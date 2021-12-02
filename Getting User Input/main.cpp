#include <iostream>

using namespace std;

int main()
{

    ///Number input

    double age;
    cout << "Enter your age: ";
    cin >> age;

    cout << "You are " << age << " years old!" << endl;

    ///String input

    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello, " << name << "!!" << endl;


    return 0;
}

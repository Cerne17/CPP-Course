#include <iostream>

using namespace std;

void hello(string name); ///declaring the function

int main()
{
    string userName;
    cout << "Type in your name: ";
    getline(cin, userName);
    cout << "Top";
    hello(userName);
    cout << "Bottom";

    return 0;
}

///void functions do not return anything
void hello(string name){
    cout << "Hello, " << name << "!";
}

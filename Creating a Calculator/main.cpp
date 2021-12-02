#include <iostream>

using namespace std;

double calculator(string operation, double num1, double num2){

    if (operation == "SUM"){
        cout << "\n\n" << num1 + num2;
    }else if (operation == "SUB"){
        cout << "\n\n" << num1 - num2;
    }else if (operation == "MULT"){
        cout << "\n\n" << num1 * num2;
    }else if (operation == "DIV"){
        cout << "\n\n" << num1 / num2;
    }else{
        cout << "\n\n ERROR! None of the specified operations was selected.";
    }
}

int main()
{
    bool controler = true;
    while(controler){
        string master;
        cout << "Wanna do a Calculation? \n (YES or NO)\n";
        getline(cin, master);
        if (master == "YES"){
            string op;
            double n1, n2;
            cout << "Which operation is to be done? \n";
            cout << "SUM; SUB; MULT; DIV: \n\n";
            getline(cin, op);
            cout << "Enter first number: ";
            cin >> n1;
            cout << "Enter second number: ";
            cin >> n2;
            cout << "\n\n" << calculator(op, n1, n2);
        }else{
            controler = false;
        }
    }


    return 0;
}

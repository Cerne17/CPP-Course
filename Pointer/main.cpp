#include <iostream>
using namespace std;
int main()
{
/*    cout << &age; //"&" says that you want to print out the memory address where the age variable is addressed
                  //addresses's name is pointer
*/
    int age = 19;
    int *pAge = &age; //Pointer Variable
    double gpa = 2.7;
    double *pGpa = &gpa; //Pointer Variable
    string name = "Mike";
    string *pName = &name; //Pointer Variable

    cout << pAge << endl;
    cout << endl;

    cout << "--------------" << endl;
    cout << endl;

    //Dereferencing a Pointer:

    cout << *pAge;

    cout << "--------------" << endl;
    cout << endl;

    //Nesting Referencing Pointers and Dereferencing Pointers:

    cout << *&gpa << endl;

    return 0;
}

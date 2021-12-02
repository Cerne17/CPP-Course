#include <iostream>

using namespace std;

//Class (creating a "Data Type")
//Class: blueprint of a data type
//Object: An actual instance of the blueprint
class Book{
    public:
        string title;
        string author;
        int pages;
};

int main()
{

    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    cout << book1.title << endl;
    cout << book1.pages << endl;

    Book book2;
    book2.title = "Lord of The Rings";
    book2.author = "Tolkein";
    book2.pages = 700;

    cout << book2.title << endl;
    cout << book2.pages << endl;

    return 0;
}

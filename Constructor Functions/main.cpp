#include <iostream>

using namespace std;

class Book{
    public:
        string title;
        string author;
        int pages;
        //Constructor Function: Function that is called everytime an Object is created
        Book(){
            title = "no title";
            author = "no author";
            pages = 0;
        } //in case no infos are passed

        Book(string aTitle, string aAuthor, int aPages){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

int main()
{

    Book book1("Harry Potter", "JK Rowling", 500);

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;

    Book book2("The Lord of The Rings", "Tolkein", 700);

    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;

    Book book3; //Object with no pre-infos

    cout << book3.title << endl;
    cout << book3.author << endl;
    cout << book3.pages << endl;

    return 0;
}

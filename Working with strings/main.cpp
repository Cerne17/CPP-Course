#include <iostream>

using namespace std;

int main()
{
    string Phrase = "Giraffe Academy";
    cout << Phrase << endl; ///"endl" says that C++ has to create a new line (\n also works)
    cout << "Hello \n\n\n\n\n";
    /// string Functions:
    ///Length
    cout << Phrase.length() << endl;
    cout << Phrase[0] << "\n\n\n\n\n\n";

    Phrase[0] = 'B';

    ///Find ("What to find", startIndex)

    cout << Phrase.find("Academy", 0);

    ///substr (start Index, amount of characters

    cout << Phrase.substr(8, 3);

    return 0;
}

#include <iostream>
using namespace std;
/*
2D Array: An array which elements are also arrays.
array[a][b]
a: total number of arrays
b: elements inside of each array element
*/
int main()
{
    int numberGrid[3][2] = {
                            {1, 2},
                            {3, 4},
                            {5, 6}
                        };

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            cout << numberGrid[i][j] << ' '; //Nested Loop
        }
        cout << endl;
    }


    return 0;
}

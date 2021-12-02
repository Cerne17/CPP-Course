#include <iostream>

using namespace std;

int power(int a, int b){
    int result = 1;
    for (int i = 0; i < b; i++){
        result *= a;
    }

    return result;
}

int main()
{
    cout << power(4, 3);

    return 0;
}

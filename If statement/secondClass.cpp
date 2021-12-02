#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;
    a-=2;
    a=a%2;
    if(a=0){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}

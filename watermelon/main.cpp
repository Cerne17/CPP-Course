#include <iostream>
using namespace std;
int main(){
    set aSet;
    int b;
    string a;
    getline(cin, a);
    for(auto i : a){
        aSet.insert(i);
    }
    b=aSet.length()
    if ((b!=0){
        cout << "IGNORE HIM!";
    }else{
        cout << "CHAT WITH HER!";
    }
    return 0;
}

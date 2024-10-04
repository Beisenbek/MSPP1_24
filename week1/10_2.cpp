#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;

    do{
        cout << x % 2;
        x = x / 2;
    }while(x > 0);
    
    return 0;
}
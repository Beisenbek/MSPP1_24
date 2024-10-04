#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;

    int s = 0;

    for(int i = 1; i <=8; ++i){
         s += x % 2;
         x /= 2;
    }
    
    cout << s;
    
    return 0;
}
#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;

    int s = x % 2;
    
    x /= 2;
    s += x % 2;

    x /= 2;
    s += x % 2;

    x /= 2;
    s += x % 2;

    x /= 2;
    s += x % 2;

    x /= 2;
    s += x % 2;

    x /= 2;
    s += x % 2;

    x /= 2;
    s += x % 2;

    cout << s;
    
    return 0;
}
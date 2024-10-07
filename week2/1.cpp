#include <iostream>

using namespace std;

int main(){ 

    int a, b, c;
    cin >> a >> b >> c;

    bool e1 = a + b > c;
    bool e2 = a + c > b;
    bool e3 = c + b > a;

    if(e1 == true && e2 == true && e3 == true) cout << "YES";
    else cout << "NO";
    
    return 0;
}
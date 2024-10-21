#include <iostream>
#include <algorithm>
using namespace std;

int min4(int a, int b, int c, int d){
    int ar[4];
    ar[0] = a;
    ar[1] = b;
    ar[2] = c;
    ar[3] = d;
    sort(ar, ar + 4);
    return ar[0]; 
}

int main(){ 

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min4(a, b, c, d);
    
    return 0;
}

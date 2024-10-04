#include <iostream>

using namespace std;

int main(){

    int n, k;
    cin >> n >> k;

    int d = n / k;

    if(n % k > 0) d = d + 1;

    cout << d;
    
    return 0;
}
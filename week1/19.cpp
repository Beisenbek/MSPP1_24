#include <iostream>

using namespace std;

int main(){

    int n, k;
    cin >> n >> k;

    int d = n / k + bool(n % k);

    cout << d;
    
    return 0;
}
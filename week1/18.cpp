#include <iostream>

using namespace std;

int main(){

    int n, k;
    cin >> n >> k;

    int d = (n + k - 1) / k;

    cout << d;
    
    return 0;
}
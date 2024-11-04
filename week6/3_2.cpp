#include <iostream>
#include <algorithm>

using namespace std;

string base = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

string f(int n, int k, string result){
    if(n < k) return  base[n] + result;
    return f(n / k, k, base[n % k] + result);
}

int main(){ 

    int n, k;
    cin >> n >> k;
    cout << f(n, k, "");

    return 0;
}

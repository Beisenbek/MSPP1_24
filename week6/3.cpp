#include <iostream>
#include <algorithm>

using namespace std;

char ch(int n){
    if(n <= 9) return char('0' + n);
    return char(n - 10 + 'A'); 
}

string f(int n, int k, string result){
    if(n < k) return  ch(n) + result;
    return f(n / k, k, ch(n % k) + result);
}

int main(){ 

    int n, k;
    cin >> n >> k;
    cout << f(n, k, "");

    return 0;
}

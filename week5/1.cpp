#include <iostream>

using namespace std;

int f(int n){
    if(n == 1) return 1;
    return f(n - 1) + n;
}

int f2(int n){
    int res = 0;
    for(int i = 1; i <= n; ++i){
        res += i;
    }
    return res;
}

int main(){ 

    int x;
    cin >> x;
    cout << f(x) << " " << f2(x);

    return 0;
}

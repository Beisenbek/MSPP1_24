#include <iostream>

using namespace std;

long long m[100];

long long f(int n){
    if(m[n] == 0){
        m[n] = f(n-1) + f(n-2);
    }
    return m[n];
}                      

int main(){ 
    int x;
    cin >> x;

    m[1] = m[2] = 1;
    for(int i = 3; i <=x; ++i){
        m[i] = 0;
    }

    cout << f(x);

    return 0;
}


//1 1 2 3 5 8 13 ..?
//1 2 3 4 5 6 7    n
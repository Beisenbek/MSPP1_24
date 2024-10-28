#include <iostream>

using namespace std;

long long f(int n){
    if(n == 1 || n == 2) return 1;
    return f(n-1) + f(n-2);
}                      

int main(){ 

    int x;
    cin >> x;
    cout << f(x);

    return 0;
}


//1 1 2 3 5 8 13 ..?
//1 2 3 4 5 6 7    n
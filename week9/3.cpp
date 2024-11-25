#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n = 10;

    int a[n];

    fill(a, a + n, 7);

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }

    return 0;
}
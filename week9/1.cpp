#include <iostream>
#include <algorithm>

using namespace std;

bool f(int x){
    if(x % 2 == 1) return true;
    return false;
}

int main(){

    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);

    cout << count_if(a, a + n, f);

    return 0;
}
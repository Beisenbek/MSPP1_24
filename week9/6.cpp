#include <iostream>
#include <algorithm>

using namespace std;

void f(int x){
    cout << x << " ";
}

int main(){

    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);

    for_each(a, a + n, f);

    return 0;
}
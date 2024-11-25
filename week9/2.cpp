#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);

    rotate(a, a + 3, a + n);

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }

    return 0;
}
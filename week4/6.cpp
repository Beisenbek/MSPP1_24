#include <iostream>
#include <algorithm>
using namespace std;

void up_arr(int ar[], int n){
    ar[0] = 10;
}

int main(){ 

    int a[10];
    for(int i = 0; i < 10; ++i){
        cin >> a[i];
    }    
    //up_arr(a, 10);
    cout << a[0];
    return 0;
}

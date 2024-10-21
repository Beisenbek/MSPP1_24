#include <iostream>
#include <algorithm>
using namespace std;

int min_arr(int ar[], int n){
    sort(ar, ar + n);
    return ar[0]; 
}

int main(){ 

    int a[10];
    for(int i = 0; i < 10; ++i){
        cin >> a[i];
    }    
    cout << min_arr(a, 10);
    return 0;
}

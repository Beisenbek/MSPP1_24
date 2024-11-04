#include <iostream>
#include <algorithm>

using namespace std;

int a[1000000];

int search(int a[], int n, int pos, int x){
   if(pos >= n) return -1;
   if(a[pos] == x) return pos;
   return search(a, n, pos + 1, x);
}

int main(){ 

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int x;
    cin >> x;

    cout << search(a, n, 0,  x);


    return 0;
}

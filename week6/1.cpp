#include <iostream>
#include <algorithm>

using namespace std;

int a[1000000];

string search(int a[], int l, int r, int x){
    if(l > r) return "No";
    int m = (r - l)/2 + l;
    if(a[m] == x) return "Yes";
    if(a[m] > x) return search(a, l, m - 1, x);
    return search(a, m + 1, r, x);
}

int main(){ 

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }


    int x;
    cin >> x;

    cout << search(a, 0, n - 1, x);

    return 0;
}

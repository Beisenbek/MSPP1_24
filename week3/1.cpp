#include <iostream>
#include <algorithm>

using namespace std;

int main(){ 

    int n;
    cin >> n;
    int a[n];

    int s = 0;

    for(int i = 0; i < n; ++i){
        cin >> a[i];
        s = s + a[i];
    }

    sort(a, a + n);

    cout << s << " " << a[n - 1];

    
    return 0;
}

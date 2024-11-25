#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int a[10];

    fill(a, a + 10, 0);

    int x;
    while(true){
        cin >> x;
        if(x == -1) break;
        a[x]++;
    }

    for(int i = 0; i < 10; ++i){
        cout << a[i] << " ";
    }

    return 0;
}
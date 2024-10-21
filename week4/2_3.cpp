#include <iostream>
#include <algorithm>
using namespace std;


bool f2(int a, int b){
    if(a < b) return true;
    return false;
}

bool f3(int a, int b){
    if(a > b) return true;
    return false;
}

void f(int t, int m){
    int a[m];

    for(int i = 0; i < m; ++i){
        cin >> a[i];
    }

    if(t % 2 == 0){
       sort(a, a + m, f2);
    }else{
       sort(a, a + m, f3);
    }

    for(int i = 0; i < m; ++i){
        cout  << a[i] << " ";
    }
    cout << endl;
}


int main(){ 

    int n, m;
    cin >> n >> m;

    for(int t = 0; t < n; ++t){
        f(t, m);
    }


    return 0;
}

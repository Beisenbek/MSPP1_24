#include <iostream>
#include <algorithm>

using namespace std;

int main(){ 

    int n;
    cin >> n;
    int a[n][n];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(i + j == n - 1) a[i][j] = 1;
            else if(i + j >= n) a[i][j] = 2;
            else a[i][j] = 0;
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

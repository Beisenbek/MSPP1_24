#include <iostream>
#include <algorithm>

using namespace std;

int main(){ 

    int n, m;
    cin >> n >> m;
    int a[n][m];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }

    int best_value = a[0][0];
    int best_row = 0;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(a[i][j] > best_value){
                best_value = a[i][j];
                best_row = i;
            }
        }
    }

    cout << best_row;

    return 0;
}

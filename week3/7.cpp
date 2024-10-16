#include <iostream>
#include <algorithm>

using namespace std;

int main(){ 

    int n, m;
    cin >> n >> m;

    int a[n][m];

    for(int i = 0; i <= n - 1; ++i){
        for(int j = 0; j <= m - 1; ++j){
            cin >> a[i][j];
        }
    }

    bool isCool = true;
    for(int i = 0; i <= n - 2; ++i){
        for(int j = 0; j <= m -2; ++j){
            if(a[i][j] == 0 && a[i][j + 1] == 0 && a[i+1][j] == 0 && a[i + 1][j + 1] == 0){
                isCool = false;
                break;
            }
            else if(a[i][j] == 1 && a[i][j + 1] == 1 && a[i+1][j] ==1 && a[i + 1][j + 1] == 1){
                isCool = false;
                break;
            }
        }
        if(!isCool) break;
    }

    if(!isCool) cout << "NO";
    else cout << "YES";

    return 0;
}

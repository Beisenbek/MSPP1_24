#include <iostream>
#include <algorithm>

using namespace std;

int main(){ 

    int n;
    cin >> n;

    int a[2 * n - 1];

    int v = n - 1;
    a[0] = v;

    int i = 1;

    while (v > 0){
        a[i++] = v;
        a[i++] = v;
        v--;
    }

   
    /*
    int dr[4];
    int dc[4];
    dr[0] = 0;
    dc[0] = 1;
    dr[1] = 1;
    dc[1] = 0;
    dr[2] = 0;
    dc[2] = -1;
    dr[3] = -1;
    dc[3] = 0;
    */

    int m[n][n];

    int dr[] = {0, 1, 0, -1};
    int dc[] = {1, 0, -1, 0};

    int k = 0;
    int r = 0;
    int c = 0;
    int cnt = 1;
    m[r][c] = cnt;

    for(int i = 0; i < 2 * n - 1; ++i){
        for(int j = 0; j < a[i]; ++j){
            r = r + dr[k];
            c = c + dc[k];
            cnt = cnt + 1;
            m[r][c] = cnt;
        }
        k = (k + 1) % 4;
    }


    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

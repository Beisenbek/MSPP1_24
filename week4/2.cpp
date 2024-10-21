#include <iostream>
#include <algorithm>
using namespace std;

int main(){ 

    int n;
    cin >> n;
    int m;
    cin >> m;

    for(int t = 0; t < n; ++t){
      
        int a[m];

        for(int i = 0; i < m; ++i){
            cin >> a[i];
        }

        sort(a, a + m);

        if(t % 2 == 0){
            for(int i = 0; i < m; ++i){
                cout <<  a[i] << " ";
            }
        }else{
            for(int i = m - 1; i >= 0; --i){
                cout <<  a[i] << " ";
            }
        }
        cout << endl;
    }


    return 0;
}

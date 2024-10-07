#include <iostream>
#include <algorithm>

using namespace std;

int main(){ 

    int n;
    cin >> n;

    int x;

    for(int i = 0; i < n; ++i){
        cin >> x;
        if(i % 2 == 0) cout << x << " ";
    }


    return 0;
}

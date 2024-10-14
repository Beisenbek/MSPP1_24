#include <iostream>
#include <algorithm>

using namespace std;

int main(){ 

    int n;
    cin >> n;
    int x;

    int s = 0;
    int m = 0;

    for(int i = 0; i < n; ++i){
        cin >> x;
        s = s + x;
        if(x > m) m = x;
    }

    cout << s << " " << m;

    
    return 0;
}

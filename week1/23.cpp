#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;

    int min_d = 9;
    int max_d = -1;

    while(x > 0){
        min_d = min(min_d, x % 10);
        max_d = max(max_d, x % 10);
        x /= 10;
    }

    cout << min_d << " " << max_d;

    return 0;
}
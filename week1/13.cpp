#include <iostream>

using namespace std;

int main(){

    int s = 0;

    for(int i = 1; i <= 100; i += 1){
        s = s + i;
    }

    cout << s;
    
    return 0;
}
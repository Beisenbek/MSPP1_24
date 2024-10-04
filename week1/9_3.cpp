#include <iostream>

using namespace std;

int main(){

    int i = 1;

    for(;; i = i + 1)
        if(i > 100) break;
        else cout << i << " ";
    
    return 0;
}
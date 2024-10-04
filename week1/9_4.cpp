#include <iostream>

using namespace std;

int main(){

    int i = 1;

    for(;;){
        if(i > 100) break;
        else cout << i << " ";
        i = i + 1;
    }
    
    return 0;
}
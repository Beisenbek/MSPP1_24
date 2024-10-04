#include <iostream>

using namespace std;

int main(){

    cout << "start" << endl;

    for(int i = 1;; i = i + 1){
        if(i % 2 == 0) continue;
        if(i > 100) break;
        cout << i << " ";
    }

    cout << endl << "end!";
    
    return 0;
}
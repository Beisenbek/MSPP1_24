#include <iostream>

using namespace std;

int main(){ 

    int n;
    cin >> n;

    if(n % 100 != 0 && n % 4 == 0){
        cout << "YES";
    }else if( n % 400 == 0){
        cout << "YES";
    }else {
        cout << "NO";
    } 
    
    return 0;
}
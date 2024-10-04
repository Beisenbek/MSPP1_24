#include <iostream>

using namespace std;

int main(){

    int i = 1;
    int j = 1;

    int a = ++i;
    int b = j++;

    cout << a << " " << i <<endl;
    cout << b << " " << j <<endl;
    
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main(){ 

    string s;
    cin >> s;

    int sum = 0;
    
    for(int i = 0; i < s.size(); ++i){
        sum = sum + (int(s[i]) - 48)  * pow(2, s.size() - 1 - i);
    }

    cout << sum;
    
    return 0;
}
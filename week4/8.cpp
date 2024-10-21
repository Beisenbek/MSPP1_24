#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int f1(char c){
    int d = int(c) - int('0');
    return d;
}

int str2num(string str){
    int res = 0;
    for(int i = 0; i < str.size(); ++i){
        int p = str.size() - 1 - i;
        int v = pow(10, p);
        res += f1(str[i]) * v;
    }
    return res;
}

int main(){ 

    string s;
    cin >> s;
    cout << sqrt(str2num(s));
    return 0;
}

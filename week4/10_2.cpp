#include <iostream>

using namespace std;

bool isOK(string s){
    for(int i = 0; i < s.size(); ++i){
        if(s[i] >='0' && s[i] <='9')
            return false;
    }
    return true;
}

int main(){ 

    string s;

    while(cin >> s){
        if(isOK(s)){
            cout << s<< endl;
        }
    }
  
    return 0;
}

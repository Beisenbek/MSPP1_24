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
    getline(cin, s);
    s = s + ' ';

    string t = "";

    for(int i = 0; i < s.size(); ++i){
        if(s[i] != ' '){
            t = t + s[i];
        }else{
            if(isOK(t)){
                cout << t << endl;
            }
            t = "";
        }
    }

    cout << t;
  
    return 0;
}

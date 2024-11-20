#include <iostream>

using namespace std;

int main(){

    int cnt = 0;
    string str;
    cin >> str;

    for(int i = 0;i < str.size(); ++i){
        if(str[i] == '(') cnt++;
        else {
            if(cnt == 0){
                cout << "NO";
                return 0;
            }else{
                cnt--;
            }
        }
    }

    if(cnt != 0){
        cout << "NO";
    }else{
        cout << "YES";
    }

    return 0;
}
#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<char> st;

    string str;
    cin >> str;

    for(int i = 0;i < str.size(); ++i){
        if(str[i] == '(') st.push('(');
        else {
            if(st.size() == 0){
                cout << "NO";
                return 0;
            }else{
                st.pop();
            }
        }
    }

    if(st.size() != 0){
        cout << "NO";
    }else{
        cout << "YES";
    }

    return 0;
}
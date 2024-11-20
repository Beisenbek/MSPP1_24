#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<char> st;

    string str;
    cin >> str;

    for(int i = 0;i < str.size(); ++i){
        if(str[i] == '(' || str[i] == '{'  ) st.push(str[i]);
        else {
            if(st.size() == 0){
                cout << "NO";
                return 0;
            }else if(str[i] == ')' && st.top() == '('){
                st.pop();
            }else if(str[i] == '}' && st.top() == '{'){
                st.pop();
            }else{
                cout << "NO";
                return 0;
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
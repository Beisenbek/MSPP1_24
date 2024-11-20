#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<char> st;

    string str;
    cin >> str;

    for(int i = 0;i < str.size(); ++i){
        if(st.size() > 0 && st.top() == str[i]){
            st.pop();
        }else{
            st.push(str[i]);
        }
    }

    if(st.size() != 0){
        cout << "NO";
    }else{
        cout << "YES";
    }

    return 0;
}
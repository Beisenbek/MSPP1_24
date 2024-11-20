#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<int> st;
    int x;

    for(int i = 0; i < 10; ++i){
        cin >> x;
        st.push(x);
    }

    cout << st.size() << endl;

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
#include <iostream>
#include <queue>

using namespace std;

int main(){

    priority_queue<int> q;
    int x;

    for(int i = 0; i < 12; ++i){
        cin >> x;
        q.push(x);
    }

    cout << q.size() << endl;

    while(!q.empty()){
        cout << q.top() << " ";
        q.pop();
    }

    return 0;
}
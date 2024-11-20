#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue<int> q;
    int x;

    for(int i = 0; i < 10; ++i){
        cin >> x;
        q.push(x);
    }

    cout << q.size() << endl;

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
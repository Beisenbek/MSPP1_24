#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int> v;

    int x;

    do{
        cin >> x;
        if(x == 0) break;
        v.push_back(x);
    }while(true);


    vector<int>::iterator it = v.begin() + 0;//v[0], v[1]

    cout << *it << endl;//v[0]
    v.erase(it);

    cout << v.size() << endl;

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

    return 0;
}
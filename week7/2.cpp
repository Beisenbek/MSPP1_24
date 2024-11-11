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

    cout << v.size() << endl;

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

    return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);

    vector<int> :: iterator it = unique(v.begin(), v.end());

    v.resize(distance(v.begin(), it));

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

    return 0;
}
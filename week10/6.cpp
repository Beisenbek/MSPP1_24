#include <iostream>
#include <vector>

using namespace std;


void print(vector<int> v){
    v[0] = 100;
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){


    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    print(v);

    cout << v[0];

    return 0;
}
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


    vector<int>::iterator it1 = v.begin() + 1;
    vector<int>::iterator it2 = v.begin() + 5; 

    v.erase(it1, it2);

    cout << v.size() << endl;

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

    return 0;
}
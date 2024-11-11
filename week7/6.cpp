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


    vector<int>::iterator it1 = v.begin();

    int pos = 1;

    while(pos < v.size()){
        v.erase(v.begin() + pos);
        pos = pos + 1;
    }

    cout << v.size() << endl;

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

    return 0;
}

//1 3 4 5 6 
//0 1 2 3 4 5
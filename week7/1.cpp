#include <iostream>
#include <vector>

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

    return 0;
}
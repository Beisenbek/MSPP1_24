#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){

    set<int> s1;

    int x;

    do{
        cin >> x;
        if(x == 0) break;
        s1.insert(x);
    }while(true);


    set<int>::iterator it1;

    cout << s1.size() << endl;

    for(it1 = s1.begin(); it1 != s1.end(); ++it1){
        cout << *it1 << " ";
    }

    return 0;
}

//1 3 4 5 6 
//0 1 2 3 4 5
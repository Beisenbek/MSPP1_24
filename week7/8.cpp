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


    int y;
    cin >> y;

    set<int>::iterator it1 = s1.find(y);

    if(it1 != s1.end()){
        cout << "found!";
    }else{
        cout << "not found!";
    }

   

    return 0;
}
//b         e
//1 2 3 4 5 _
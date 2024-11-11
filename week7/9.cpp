#include <iostream>

using namespace std;

int main(){


    pair<string, int> p;

    p = make_pair("apple", 5);

    cout << p.first << endl;
    cout << p.second << endl;


    return 0;
}
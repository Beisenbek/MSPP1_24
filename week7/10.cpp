#include <iostream>

using namespace std;

int main(){


    pair<string, int> p;

    string name;
    double gpa;
    cin >> name >> gpa;

    p = make_pair(name, gpa);

    cout << p.first << endl;
    cout << p.second << endl;


    return 0;
}
#include <iostream>

using namespace std;

int main(){


    pair<string, pair<string, double> > p;

    string name, sname;
    double gpa;
    cin >> name >> sname >>  gpa;

    p = make_pair(sname, make_pair(name, gpa));

    cout << p.first << endl;
    cout << p.second.first << endl;
    cout << p.second.second << endl;


    return 0;
}
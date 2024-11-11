#include <iostream>
#include <algorithm>

using namespace std;

bool f(pair<double, pair<string, string > > p1, pair<double, pair<string, string > > p2){
    if(p1.second.second.size() > p2.second.second.size()) return true;
    return false;
}

int main(){

    int n;
    string name, sname;
    double gpa;
    cin >> n;

    pair<double, pair<string, string > > p[n];

    for(int i = 0; i < n; ++i){
        cin >> name >> sname >>  gpa;
        p[i] = make_pair( gpa , make_pair(name, sname));
    }

    sort(p, p + n, f);

    for(int i = 0; i < n; ++i){
        cout << p[i].second.first << " ";
        cout << p[i].second.second << " ";
        cout << p[i].first << " ";
        cout << endl;
    }

    return 0;
}
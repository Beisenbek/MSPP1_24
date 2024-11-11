#include <iostream>
#include <map>

using namespace std;

int main(){

    int n;
    cin >> n;
    string s1, s2;
    map<string, string> m1;

    for(int i = 0; i < n; ++i){
        cin >> s1 >> s2;
        m1.insert(make_pair(s1,s2));
    }

    map<string, string> :: iterator it1;

    for(it1 = m1.begin(); it1!= m1.end(); ++it1){
        cout << (*it1).first << "->" << (*it1).second << endl; 
    }

    return 0;
}
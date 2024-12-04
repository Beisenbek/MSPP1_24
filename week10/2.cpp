#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct student{
    string name;
    string id;
    double gpa;
    string getInfo(){
        return name + " " + id;
    }
};

void print(student s){
    cout << s.name << " " << s.id << " " << s.gpa << endl;
}

bool f(student l, student r){
    return l.gpa < r.gpa;
}

int main(){

    student s1;
    s1.name = "Bob";
    s1.gpa = 4.0;
    s1.id = "O9FSXX019";

    student s2;
    s2.name = "Alice";
    s2.gpa = 3.4;
    s2.id = "O9FSXX020";


    student s3;
    s3.name = "Jane";
    s3.gpa = 3.7;
    s3.id = "O9FSXX021";


    vector<student> v;

    v.push_back(s1);
    v.push_back(s2);
    v.push_back(s3);

    sort(v.begin(), v.end(),f);

    print(v[0]);
    print(v[1]);
    print(v[2]);



    return 0;
}
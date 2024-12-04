#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct student{
    string name;
    string id;
    double gpa;
    void print(){
        cout << this->name << " " << this->id << " " << this->gpa << endl;
    }

    bool operator < (const student & rhs){
        //rhs.gpa = 100;
        if(this->gpa < rhs.gpa) return true;
        return false;
    }

};

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

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); ++i){
       v[i].print();
    }



    return 0;
}
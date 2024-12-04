#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct student{
    string name;
    string id;
    double gpa;
    student(string _name, string _id, double _gpa){
        name = _name;
        id = _id;
        gpa = _gpa;
    }
    void print(){
        cout << this->name << " " << this->id << " " << this->gpa << endl;
    }

    bool operator < (student rhs){
        if(this->gpa < rhs.gpa) return true;
        return false;
    }

};

int main(){

    student s1("A1","I1", 3.0);
    student s2("A2","I2", 3.0);
    student s3("A3","I3", 3.0);

    s1.print();
    s2.print();
    s3.print();
    


    return 0;
}
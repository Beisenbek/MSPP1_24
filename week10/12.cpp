#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct student{
    static int k;
    string name;
    string id;
    double gpa;
    student(string name, string id, double gpa){
        this->name = name;
        this->id = id;
        this->gpa = gpa;
    }
    void print(){
        cout << this->name << " " << this->id << " " << this->gpa * student::k << endl;
    }
    bool operator < (student rhs){
        if(this->gpa < rhs.gpa) return true;
        return false;
    }
};

int student::k = 2;

int main(){

    student * s = new student("A", "I", 4.0);
    student * s1 = new student("A1", "I1", 3.0);
    student * s2 = new student("A2", "I2", 2.0);

    s->print();
    s1->print();
    s2->print();
    


    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct student{
    string name;
    string id;
    double gpa;
    student(string name, string id, double gpa){
        this->name = name;
        this->id = id;
        this->gpa = gpa;
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

    student * s = new student("A", "I", 4.0);

    s->print();
    


    return 0;
}
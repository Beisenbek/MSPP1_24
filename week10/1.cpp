#include <iostream>

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
    cout << s.sname << " " << s.id << " " << s.gpa << endl;
}

int main(){

    student s1;
    s1.name = "Bob";
    s1.gpa = 4.0;
    s1.id = "O9FSXX019";

    cout << s1.getInfo();
    cout << endl;
    print(s1);

    return 0;
}
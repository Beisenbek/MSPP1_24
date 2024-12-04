#include <iostream>
#include <vector>

using namespace std;


void print(char * c){
   cout << *(c + 1);
}

int main(){

    char x[] = {'a', 'b', 'c', 'd', 'e'};

    print(x);

    return 0;
}
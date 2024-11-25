#include <iostream>
#include <algorithm>
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand

using namespace std;

int random_in_range(int min, int max){
    int x =  rand() % max;
    while(x < min){
        x++;
    }
    return x;
}

int random(){
   return random_in_range(1, 100);
}

void print(int x){
    cout << x << " ";
}
int main(){

    srand (time(NULL));

    int n = 10;
    int a[n];

 
    generate(a, a + n, random);

    for_each(a, a + n, print);

   
    return 0;
}
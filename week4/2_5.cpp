#include <iostream>
#include <algorithm>
using namespace std;


bool f2(int a, int b);
bool f3(int a, int b);
void sort_array(int a[], int m, int t);
void read_array(int a[], int m);
void print_array(int a[], int m);
void solve(int t, int m);


int main(){ 

    int n, m;
    cin >> n >> m;

    for(int t = 0; t < n; ++t){
       solve(t, m);
    }


    return 0;
}

bool f2(int a, int b){
    if(a < b) return true;
    return false;
}

bool f3(int a, int b){
    if(a > b) return true;
    return false;
}

void sort_array(int a[], int m, int t){
    if(t % 2 == 0){
       sort(a, a + m, f2);
    }else{
       sort(a, a + m, f3);
    }
}

void read_array(int a[], int m){
    for(int i = 0; i < m; ++i){
        cin >> a[i];
    }
}

void print_array(int a[], int m){
    for(int i = 0; i < m; ++i){
        cout  << a[i] << " ";
    }
    cout << endl;
}

void solve(int t, int m){
    int a[m];

    read_array(a, m);

    sort_array(a, m, t);

    print_array(a, m);
}

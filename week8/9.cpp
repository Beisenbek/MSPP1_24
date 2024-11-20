#include <iostream>
#include <deque>

using namespace std;

int main(){

    deque<int> d;
    bool isStd = true;
    int q, x, o;
    cin >> q;

    for(int i = 0; i < q; ++i){
        cin >> o;
        if(o == 1){
            cin >> x;
            if(isStd) d.push_back(x);
            else d.push_front(x);
        }else if(o == 2){
            isStd = !isStd;
        }
    }

    if(isStd){
        while(!d.empty()){
            cout << d.front() << " ";
            d.pop_front();
        }
    }else{
        while(!d.empty()){
            cout << d.back() << " ";
            d.pop_back();
        }
    }

    return 0;
}
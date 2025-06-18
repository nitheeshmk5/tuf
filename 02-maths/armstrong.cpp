#include <iostream>
using namespace std;

bool arm(int x){
    int res = 0;
    int real = x;
    while(x > 0){
        int last_d = x % 10;
        x /= 10;
        res = res + (last_d * last_d * last_d);
    }
    if(res == real)
        return true;
    return false;
}

int main(){
    cout << arm(153) << endl;
}
#include <iostream>
using namespace std;

int count_d(int n){
    int c = 0;
    while (n > 0){
        n /= 10;
        c++;
    }
    return c;
}

int main(){
    cout << count_d(142222) << endl;
}
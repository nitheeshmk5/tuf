#include <iostream>
using namespace std;

void sumOfNnumbers1(int sum,int n){
    
    if (n < 1)
    {
        cout << sum << endl;
        return;
    }
    sumOfNnumbers1(sum + n, n - 1);
}

int sumNum(int n){
    if(n==0){
        return 0;
    }
    return n + sumNum(n - 1);
}

int fact(int n){
    if(n == 0){
        return 1;
    }
    return n * fact(n - 1);
}

int main(){
    // sumOfNnumbers1(0,10);
    // cout << sumNum(10) << endl;
    cout << fact(4) << endl;
}
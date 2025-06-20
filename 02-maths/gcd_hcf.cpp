#include <iostream>
using namespace std;

void gcd1(int n1,int n2){
    int n = min(n1, n1);
    for (int i = n; i > 0; i--){
        if(n1 % i ==0 && n2 % i == 0){
            cout << "GCD : " << i << endl;
            break;
        }
    }
}

void euclidean(int n1, int n2){
    while(n1 != 0 && n2 != 0){
        if(n1 > n2){
            n1 = n1 % n2;
        }
        else{
            n2 = n2 % n1;
        }
    }
    if(n1 == 0)
        cout << n2 << endl;
    else
        cout << n1 << endl;
}

int main(){
    //gcd1(11, 13);
    euclidean(10,52);
}
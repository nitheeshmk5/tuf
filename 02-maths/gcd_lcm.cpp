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

int euclidean(int n1, int n2){
    while(n1 != 0 && n2 != 0){
        if(n1 > n2){
            n1 = n1 % n2;
        }
        else{
            n2 = n2 % n1;
        }
    }
    if(n1 == 0)
        return n2;
    else
        return n1;
}

int lcm_func(int n1, int n2){
    int gcd = euclidean(n1, n2);

    int lcm = (n1 * n2) / gcd;

    return lcm;
}

int main(){
    //gcd1(11, 13);
    int gcd = euclidean(10,52);
    int lcm = lcm_func(52, 10);

    cout << "LCM : " << lcm << endl;
    cout << "GCD / HCF :" << gcd << endl;
}
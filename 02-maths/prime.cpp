#include <iostream>
using namespace std;

void prime_num(int n){
    int counter = 0;
    for (int i = 1; i * i < n; i++){
        if(n % i == 0){
            counter++;
            cout << i << endl;
            if ((n / i) != i)
            {
                counter++;
                cout <<  n/i << endl;
            }
        }
    }
    cout << counter << endl;
}

int main(){
    prime_num(28);
}
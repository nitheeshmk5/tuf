#include <iostream>
using namespace std;

int reverse(int x) {
    int rev = 0;
    while (x > 0)
    {
        int last_d = x % 10;
        x /= 10;
        if(rev > __INT_MAX__) {
            return 0;
        }
        rev = (rev * 10) + last_d;
    }
    return rev;
}

int main(){
    cout << reverse(123) << endl;
}
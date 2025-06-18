#include <iostream>
using namespace std;

void pattern3(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++){
            cout << i+1 <<" ";
        }
        cout << endl;
    }
}
void pattern5(int n){
    for (int i = 0; i < n; i++){
        for (int j = n; j > i; j--){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern6(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern7(int n){
    for (int i = 0; i < n; i++){
        // space
        for (int j = 0; j < n - i; j++){
            cout << "-";
        }
        //star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        //space
        for (int j = 0; j < n - i; j++){
            cout << "-";
        }
        cout << endl;
    }
}
void pattern8(int n){
    for (int i = 0; i < 2 * n - 1; i++){
        int stars = i;
        if(i >= n) {
            stars = 2*n - i -2;
        }
        for (int j = 0; j <= stars; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern9(int n){
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if(i%2 == 0)
            start = 1;
        else
            start = 0;

        for (int j = i; j < n;j++){
            cout << start;
            start = 1 - start;
        }

            cout << endl;
    }
}


int main(){

    pattern9(5);
    cout << "added\n";
    return 0;
}
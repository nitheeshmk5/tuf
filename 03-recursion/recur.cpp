#include <iostream>
using namespace std;

void rec(int count){
    if(count == 5){
        cout << "end\n";
        return;
    }
    cout << count << endl;
    count++;
    rec(count);
}

void print_name(int i,int n){
    if(i > n){
        return;  // Base Condition
    }
    cout << "Nitheesh" << endl;
    print_name(i + 1, n);
}

void print_to_n(int start,int n){
    if(start > n){
        return;
    }
    cout << start << endl;
    print_to_n(start + 1, n);
}

void print_n_to_one( int n){
    if (n < 1){
        return;
    }
    cout << n << endl;
    print_n_to_one(n -1);
}

void backtarcking(int i,int n){
    if(i < 1){
        return;
    }
    backtarcking(i - 1, n);
    cout << i << endl;
}

int main(){
    // int c = 0;
    // rec(c);
    //print_name(0,5);
    //print_to_n(0, 5);
    //print_n_to_one(5);
    backtarcking(5, 5);
}
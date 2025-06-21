#include <iostream>
using namespace std;

void reverse_arr(int i,int arr[] , int n){
    if(i > n/2)
        return;
    swap(arr[i], arr[n - i - 1]);
    reverse_arr(i + 1, arr, n);
}

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    reverse_arr(0, arr, 5);
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++) {
        cout << arr[i] << endl;
    }
}
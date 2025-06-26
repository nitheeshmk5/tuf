#include <iostream>
using namespace std;

void selection_sort(int arr[],int n){
    for (int i = 0; i < n-1; i++){
        int mini = i;
        for (int j = i+1; j < n ; j++)
        {
            if(arr[mini] > arr[j]){
                mini = j;
            }
        }
        cout << mini << endl;
        swap(arr[mini], arr[i]);
        }
}

int main(){
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, n);

    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
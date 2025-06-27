#include <iostream>
using namespace std;

void bubble_sort(int arr[],int n){
    bool swapped;
    do
    {
        swapped = false;
        for (int i = 0; i < n - 1; i++)
        {
            if(arr[i] > arr[i+1]){
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
        n--;
    } while (swapped);
}


int main(){
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, n);

    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
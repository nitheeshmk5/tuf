#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[],int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++){
        arr[i] = temp[i - low];
        //cout << arr[i] << " ";
    }
}

void merge_sort(int arr[],int low,int high){

    //baseCase
    if(low >= high){
        return;
    }

    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main(){
    int arr[] = {3, 1, 2, 4, 1, 5, 2, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    merge_sort(arr, 0, n - 1);

    // printinf output
    for(auto i : arr){
        cout << i << " ";
    }
    cout << endl;
}
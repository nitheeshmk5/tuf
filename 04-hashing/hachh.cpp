#include <bits/stdc++.h>
using namespace std;

void findacc(int arr[],int n){
    map<int, int> mpp; //hashing
    for (int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }
    for(auto i : mpp){
        cout << i.first << " -> " << i.second << endl;
        // 1 -> 4
        // 2 -> 2
        // 3 -> 1
        // 4 -> 1
        // 5 -> 1
    }


}

int main(){
    int a[] = {1, 1, 1, 2, 2, 3, 4, 5, 1};
    int n = sizeof(a) / sizeof(a[0]);
    findacc(a,n);
}
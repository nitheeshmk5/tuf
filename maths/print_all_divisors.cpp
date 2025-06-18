#include <bits/stdc++.h>
using namespace std;

void bigo_n(int x){
    for (int i = 1; i <= x; i++){
        if(x % i == 0){
            cout << i << endl;
        }
    }
}

void sqrt_n(int x){
    vector<int> ans;
    for (int i = 1; i <= sqrt(x); i++)
    {
        if(x % i == 0){
            ans.push_back(i);
            if(x / i != i){
                ans.push_back(x / i);
            }
        }
    }
    sort(ans.begin(), ans.end());
    for (auto a : ans)
        cout << a << endl;
}

int main(){
    //bigo_n(36);
    sqrt_n(36);
}
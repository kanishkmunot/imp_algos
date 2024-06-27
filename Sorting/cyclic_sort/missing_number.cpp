#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,0,3,2};
    int n = v.size();
    int i = 0;
    while (i<n)
    {
        int correctIdx = v[i];
        if(correctIdx== i || v[i]==n){
            i++;
        }
        else{
            swap(v[correctIdx], v[i]);
        }
    }
    
    for(int i=0; i<=n; i++){
        if(v[i]!=i){
            cout<<i;
            break;
        }
    }
    
}
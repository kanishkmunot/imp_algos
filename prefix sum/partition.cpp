#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++) arr[i] += arr[i-1];

    bool flag = false;

    for(int i=0; i<n; i++){
        if(2*arr[i] == arr[i-1]);
        flag = true;
        break;
    }

    if(flag) cout<<"Partition is possible";
    else cout<<"No";
}
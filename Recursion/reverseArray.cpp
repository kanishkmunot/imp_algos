#include<iostream>
#include<algorithm>
using namespace std;

void binary(int arr[], int low,int n){
    if(low>n/2){
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        return;
    }
    swap(arr[low], arr[n-low-1]);
    binary(arr, low+1,n);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0;

    binary(arr, low, n);
}

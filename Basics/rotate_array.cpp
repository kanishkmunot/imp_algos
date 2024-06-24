#include<iostream>
#include<vector> 
using namespace std; 


int rotate(vector<int>& arr, int i, int j){
    while(i<=j){
        swap(arr[i], arr[j]); 
        i++; 
        j--;
    }
}

int main(){

    vector<int> arr = {1,2,3,4,5,6,7}; 
    int n = arr.size();
    int k = 4; // Specifying the number of rotations.

    // Rotating elements in three steps:-

    // First rotation: Rotate elements from index 0 to n-k-1.
    rotate(arr,0,n-k-1); 

    // Second rotation: Rotate elements from index n-k to n-1.
    rotate(arr,n-k,n-1); 

    // Third rotation: Rotate all elements of the vector.
    rotate(arr,0,n-1); 

    for(int i = 0; i<n ; i++){ 
        cout<<arr[i]<<" "; 
    }
}

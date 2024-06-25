#include<bits/stdc++.h>
using namespace std;

// Function to find the partition index
int index(vector<int>& v, int low, int high){
    // Choose the first element as the pivot
    int pivot = v[low];
    int i = low + 1;
    int j = high;
    
    // Partition the array around the pivot
    while(i <= j){
        while(i <= j && v[i] <= pivot){
            i++;
        }
        while(i <= j && v[j] >= pivot){
            j--;
        }
        if(i <= j){
            swap(v[i], v[j]);
        }
    }
    swap(v[low], v[j]);
    return j;
}

// Function to perform quicksort
void quickSort(vector<int>& v, int low, int high){
    if(low < high){
        // Find the partition index
        int partition = index(v, low, high);
        
        // Recursively sort the subarrays
        quickSort(v, low, partition - 1);
        quickSort(v, partition + 1, high);
    }
}

int main(){
    vector<int> v = {6,7,3,1,2,5,9,4,2,1,6,2,8,4,0,76,243,5687,54};
    int n = v.size();
    int low = 0;
    int high = n - 1;

    // Call the quicksort function
    quickSort(v, low, high);

    // Print the sorted array
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}
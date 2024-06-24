#include<iostream>
using namespace std;

int pivot(int arr[], int size){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;

    while (s<e)
    {
        if(arr[mid]>=arr[0]){
            s = mid + 1;
        }
        else if(arr[mid]<arr[0]){
            e = mid; 
        }

        mid = s + ((e-s)/2);
    }

    return s;
    
}


int main(){
    int arr1[5] = {5,6,3,2,1};

    cout<<"The pivot element is: "<<pivot(arr1,9);
}
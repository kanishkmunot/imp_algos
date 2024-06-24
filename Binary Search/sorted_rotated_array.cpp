#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int pivot = -1; // smallest element

    while (s<e)
    {
       if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1]){
        pivot = mid;
        break;
       } 

       else if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
        pivot = mid + 1;
        break;
       } 

       else if(arr[mid]>arr[s]){
        s = mid + 1;
       }
       else if (arr[mid]<arr[e]){
        e = mid - 1;
       }

    }

    if(target>=arr[0] && target<=arr[pivot-1]){

        s = 0;
        e = pivot-1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if (arr[mid] == target) return mid;
            else if (arr[mid] > mid) e = mid - 1;
            else e = mid + 1;
        }
    }

    else{
        s = pivot;
        e = n-1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if (arr[mid] == target) return mid;
            else if (arr[mid] > mid) e = mid - 1;
            else e = mid + 1;
        }
    }

    return -1;
}

int main(){
    int arr1[9] = {5,6,7,8,9,1,2,3,4};

    cout<<"The pivot element is: "<<binarySearch(arr1,9, 8);
}
#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,3,6,9,21,46,87,97,103,105,109,116};
    int target = 112;
    int high = sizeof(arr)/sizeof(arr[0])-1;
    int low = 0;
    bool flag = false;

    while(low <= high){

        int mid = ((high-low)/2) + low;

        if(arr[mid]==target){
            flag = true;
            cout<<arr[mid=1];
            break;
        }

        if(arr[mid] < target){
            low = mid+1;
        }

        else if(arr[mid] > target){
            high = mid-1;
        }

    }
    if(flag == false) cout<<arr[high]; //this will print the lower bound
}
#include<iostream>
using namespace std;

int firstOccurence(int arr[], int n ){

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans=-1;

    while(s<=e){
        if (arr[mid] == mid)
        {
            s = mid + 1;
        }
        else if (arr[mid] > mid)
        {
            ans = mid;
            e = mid-1;
        }
        mid = s + (e-s)/2;
    } 
    return ans;
}

int main(){

    int arr1[9] = {0,1,3,4,6,7,8,9,11};
    cout<<"Smallest non-negative missing number is: "<<firstOccurence(arr1,9)<<endl;
}
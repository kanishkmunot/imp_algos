#include<iostream>
using namespace std;

// int peakMountain(int arr[], int n){

//     int s = 0;
//     int e = n;

//     int mid = s + (e-s)/2;

//     while(s<e){

//         if (arr[mid] < arr[mid+1])
//         {
//             s = mid + 1;
//         }
//         else {
//             e = mid;
//         }
//         mid = s + (e-s)/2;

//     }
//     return s;
// }





// class Solution {
// public:

//     int peakIndexInMountainArray(vector<int>& arr) {
//         int n = sizeof(arr)/sizeof(arr[0]);
//         int s = 0;
//         int e = n-1;
//         int ans = -1;

//         while(s<=e){

//             int mid = s + (e-s)/2;

//             if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){

//                 ans = mid;
//                 break;

//             }

//             else if (arr[mid]<arr[mid+1]){

//                 s = mid + 1;
//             }

//             else{

//                 e = mid - 1;

//             }
//         }
//         return ans;
//     }
// };






// int peakMountain(int arr[], int n){
//     int s = 0;
//     int e = n-1;
//     int ans = -1;

//     while(s<=e){

//         int mid = s + (e-s)/2;

//         if(arr[mid]>arr[mid+1]){
//             ans = arr[mid];
//             break;
//         }
//         else if (arr[mid]<arr[mid+1]){
//             s = mid + 1;
//         }
//         else{
//             e = mid - 1;
//         }
//     }
//     return ans;
// }




int main(){

    int arr[9] = {1,2,4,5,7,8,9,2,3};
    cout<<"Peak element is: "<<peakMountain(arr,9);
}
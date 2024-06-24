#include<iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key){

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans=-1;

    while(s<=e){
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid-1;
        }
        else if (arr[mid] > key)
        {
            e = mid-1;
        }
        else if (arr[mid] < key){
            s = mid + 1;
        }
        
        mid = s + (e-s)/2;
    } 
    return ans;
}

int lastOccurence(int arr[], int n, int key){

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans=-1;

    while(s<=e){
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid-1;
        }
        else if (arr[mid] < key){
            s = mid + 1;
        }
        
        mid = s + (e-s)/2;
    } 
    return ans;
}

int main(){

    int arr1[7] = {1,3,9,6,6,6,9};
    cout<<"First occurence is: "<<firstOccurence(arr1,7,6)<<endl;
    cout<<endl<<"Last occurence is: "<<lastOccurence(arr1,7,6);
}


// int FirstOccurenceSecondMethod(int arr[], int n, int key){

//     int s = 0, e = n-1;
//     int mid = s + (e-s)/2;
//     bool flag = false;

//     while(s<=e){
        
//         if (arr[mid] == key)
//         {
//             if(arr[mid-1]!=key){
//                 flag = true;
//                 cout<<mid;
//                 break;
//             }
//             else{
//                 e = mid-1;
//             }
//         }

//         else if (arr[mid] > key)
//         {
//             e = mid-1;
//         }

//         else if (arr[mid] < key){
//             s = mid + 1;
//         }
        
//         mid = s + (e-s)/2;
//     } 
//     if(flag==false) cout<<-1;
// }
#include<iostream>
#include<string>
#include<vector>
using namespace std;

// void myfunc(int arr[],int n,int idx, vector<int> v, int k){
//     if(idx==n){
//         if(v.size()==k){
//             for(int i=0;i<v.size();i++){
//                 cout<<v[i]<<" ";
//             }
//             cout<<endl;
//         }
//         return;
//     }
    
//     if(v.size() + (n-idx) < k) return;

//     myfunc(arr, n,idx+1,v,k); 
//     v.push_back(arr[idx]);
//     myfunc(arr, n,idx+1,v,k);

// }

// int main(){

//     int arr[]={1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     vector<int> v;
//     int k=3;
//     myfunc(arr,n,0,v,k);

// }




void permutation(string answer, string original){
    if(original==""){
        cout<<answer<<endl;
        return;
    }

    for(int i=0; i<original.length();i++){
        char ch = original[i];
        string left = original.substr(0,i);
        string right = original.substr(i+1);
        permutation(answer+ch, left+right);
    }
}

int main(){

    string str = "abcd";
    permutation("",str);

}

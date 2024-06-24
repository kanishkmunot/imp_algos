#include<iostream>
#include<string>
#include<vector>
using namespace std;


// METHOD-1 :-



// void myfunc(string ans, string original){
//     if(original==""){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = original[0];
//     myfunc(ans+ch, original.substr(1));
//     myfunc(ans,original.substr(1));
// }

// int main(){
//     string str = "abc";
//     myfunc("",str);
// }


// METHOD-2 :-



// void myfunc(string ans, string original,int idx){
//     if(original==""){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = original[idx];
//     myfunc(ans+ch, original.substr(idx+1),idx);
//     myfunc(ans,original.substr(idx+1),idx);
// }

// int main(){
//     string str = "abc";
//     myfunc("",str,0);
// }


// void storeSubset(string ans, string original, vector<string>& v){
//     if(original==""){
//         v.push_back(ans);
//         return;
//     }
//     char ch = original[0];
//     storeSubset(ans+ch, original.substr(1),v);
//     storeSubset(ans,original.substr(1),v);
// }

// int main(){
//     string str = "abc";
//     vector<string> v;
//     storeSubset("",str,v);
//     for(string ele : v){
//         cout<<ele<<endl;
//     }
// }


// FOR ARRAYS:-


void myfunc(int arr[],int n,int idx, vector<int> v){
    if(idx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }

    myfunc(arr, n,idx+1,v); 
    v.push_back(arr[idx]);
    myfunc(arr, n,idx+1,v);

}

int main(){
    int arr[]={1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    myfunc(arr,n,0,v);
}

#include<iostream>
#include<string>
#include<vector>
using namespace std;


void subArray(vector<int> v, vector<int> arr, int n, int idx, int temp, int sum){
    if(idx==n){
      if(temp==sum){
          for(int i=0; i<arr.size();i++){
              cout<<arr[i]<<" ";
          }
      }
      return;
    }
    arr.push_back(v[idx]);
    subArray(v, arr, n, idx+1, temp+v[idx], sum);
    arr.pop_back();
    subArray(v, arr, n, idx+1, temp, sum);
}


int main(){
    vector<int> v ={1,20,30,10,40};
    int n = v.size();
    int sum = 50;
    vector<int> k;
    subArray(v, k, n ,0, 0,sum);
}


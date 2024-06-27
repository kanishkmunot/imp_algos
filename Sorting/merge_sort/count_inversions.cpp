#include<bits/stdc++.h>
using namespace std;



int merge(vector<int>& v, int low, int mid, int high){
    vector<int> arr;
    int i = low;
    int j = mid+1;
    int count = 0;

    while(i<=mid && j<=high){
        if(v[i]<v[j]){
            arr.push_back(v[i]);
            i++;
        }
        if(v[j]<v[i]){
            arr.push_back(v[j]);
            count+=(mid+1-i);
            j++;
        }
    }

    while(i<=mid-1){
        arr.push_back(v[i]);
        i++;
    }

    while(j<=high){
        arr.push_back(v[j]);
        j++;
    }

    for(int i = low; i<=high; i++){
        v[i] = arr[i-low];
    }
    return count;
}

int mergeSort(vector<int>& v, int low, int high){
    int count = 0;
    if(low>=high) return count;
    int mid = (high+low)/2;
    count+=mergeSort(v,low,mid);
    count+=mergeSort(v,mid+1,high);
    count+=merge(v,low,mid,high);
    return count;
}

int main(){
    vector<int> v = {5,3,2,4,1};
    int n = v.size();
    int low = 0;
    int high = n-1;
    cout<<mergeSort(v,low,high);
}
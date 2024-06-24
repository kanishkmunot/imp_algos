#include<iostream>
using namespace std;

void binary(int i,int n){
    if(i==0) return;
    binary(i-1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cout<<"Enter the last digit: ";
    cin>>n;
    binary(n,n);
}

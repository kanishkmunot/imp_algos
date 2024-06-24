#include<iostream>
using namespace std;

void binary(int i,int n){
    if(i==0) return;
    cout<<i<<endl;
    binary(i-1,n);
}

int main(){
    int n;
    cout<<"Enter the last digit: ";
    cin>>n;
    binary(n,n);
}

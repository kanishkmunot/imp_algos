#include<iostream>
using namespace std;

void binary(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    binary(i+1,n);
}

int main(){
    int n;
    cout<<"Enter the last digit: ";
    cin>>n;
    binary(1,n);
}

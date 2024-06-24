#include<iostream>
using namespace std;



void binary(int i,int n){
    if(i>n) return;
    cout<<"Hello"<<endl;
    binary(i+1,n);
}



int main(){
    int n;
    cout<<"Enter the number of times you want to print: ";
    cin>>n;
    binary(0,n);
}

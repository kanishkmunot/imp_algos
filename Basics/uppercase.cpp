#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"Enter the number: ";
     cin>>n;
     int bit = n;
     int count = 0;
     int lastDigit = 0;
    while(bit>5)
    {
        cout<<bit<<endl;
        lastDigit = bit%10;
        bit/=10;
        cout<<bit;
    }
}



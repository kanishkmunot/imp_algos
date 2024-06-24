#include<iostream>
using namespace std;

int binary(int n){
    if(n==0) return 0;
    return n + binary(n-1);
}
int main(){
    cout<<binary(5);
}

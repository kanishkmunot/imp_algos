#include<iostream>
using namespace std;

void binary(int i,int n){
      if(i<1){
        cout<<n;
        return;
      }
      binary(i-1,n*i);
}

int main(){
    binary(5,1);
}

// TC -> O(n)

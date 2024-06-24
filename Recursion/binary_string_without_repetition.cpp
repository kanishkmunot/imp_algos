#include<iostream>
#include<string>
#include<vector>
using namespace std;


void binary(string ans,int n){
    if(n==0){
        cout<<ans<<endl;
        return;
    }

    if(ans==""){
        binary(ans + "0", n-1);
        binary(ans + "1", n-1);
    }

    binary(ans + "0", n-1);
    if(ans=="") binary(ans + "1", n-1); 
    else if
    
}



int main(){
    int n=4;
    binary("", n);
}

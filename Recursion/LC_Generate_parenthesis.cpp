#include<iostream>
#include<string>
#include<vector>
using namespace std;


void parenthesis(string str,int open, int close,int n){

    if(close==n){
        cout<<str<<endl;
        return;
    }

    if(open<n) parenthesis(str+"(",open+1, close, n);
    if(close<open) parenthesis(str+")",open, close+1, n);

}



int main(){
    string str = "";
    int n = 4;
    parenthesis(str, 0, 0, n);
}

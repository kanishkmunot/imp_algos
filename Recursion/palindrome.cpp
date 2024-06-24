#include<iostream>
#include<string>
using namespace std;

void binary(string str, int i, int n){
    if(i>n/2){
        cout<<"It's a palindrome";
        return;
    }
    if(str[i]!=str[n-i-1]){
        cout<<"Not palindrome";
        return;
    }
    binary(str, i+1, n);
}



int main(){
    string str = "madamimadam";
    int i = 0;
    int n = str.size();
    binary(str, i, n);

}

#include<iostream>
using namespace std;

int main(){
    int x = 9;
    int* p =&x;

    bool y = true;
    bool* q =&y;

    cout<<&x<<endl;
    cout<<p;

    cout<<&y<<endl;
    cout<<q;
}


// int* is a datatype
// x is formed at a address
// p stores the address of x
// p (which is a pointer) itself has it's own address

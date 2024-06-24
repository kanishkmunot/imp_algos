#include<iostream>
using namespace std;

int main(){
    int num1;
    int p = 5, q = 10;
    p += q -=p;
    cout<<p<<" "<<q<<endl;
    return 0;
}

// p += q -= p; This line is an example of compound assignment operators. It is equivalent to p = p + (q - p);

//  It can also be broken down into two separate steps:

// a. q -= p; This subtracts the value of p from q and assigns the result back to q. After this operation, q becomes 5.

// b. p += q;: This adds the value of q to p and assigns the result back to p. After this operation, p becomes 10 + 5 = 15.
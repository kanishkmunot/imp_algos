#include <iostream>
using namespace std;

int main() {
    // string str = "blackcat";
    // cout << str;
    // return 0;

    // char ch = 'A';
    // char ch1 = 'B';
    // char ch2 = 'C';
    // char ch3 = 'D';
    // char ch4 = 'E';
    // char ch5 = 'F';
    // char ch6 = 'G';
    // char ch7 = 'H';
    // char ch8 = 'I';
    // char ch9 = 'J';
    // char ch10 = 'K';
    // cout<<(int)ch; // Will print the ASCII values of characters


    // Printing the fractional part
    
    float x;
    cout<<"\nEnter a floating value:\n";
    cin>>x;
    int y = (int) x;
    if (y<0) y = y-1;
    float j = (float) y;
    x = x - j;
    cout<<x;


    return 0;
}
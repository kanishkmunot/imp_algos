#include<bits/stdc++.h>
using namespace std;

int sqrt1(int target){
    int s = 1;
    int e = target;
    int ans = -1;

    while(s<=e){

        int mid = s + (e-s)/2;

        if (mid*mid == target){
            ans = mid;
            break;
        }
        else if (mid*mid > target){
            e = mid - 1;
        }
        else if (mid*mid < target) {
            s = mid + 1;
        }

    }
    return ans;

}
int main(){
    cout<<sqrt1(2500);
}
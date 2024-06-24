#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {5,4,10};
    int n = 3;
    
    float kmin = (float)INT_MIN;
    float kmax = (float)INT_MAX;
    bool flag = true;

    for (int i = 0; i < n-1; i++){

        if(arr[i]>=arr[i+1]){ //kmin is updated 
            kmin = max(kmin,(arr[i]+arr[i+1])/2.0);
            break;
        }
        else{
            kmax = min(kmax,(arr[i]+arr[i+1])/2.0);
        }
        if(kmin>kmax){
            flag = false;
            break;
        }
    }
    if(flag==false) cout<<-1;
    else{
        cout<<"Range of k: "<<kmin<<","<<kmax;
    }
}
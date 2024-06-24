#include<iostream>
#include<string>
#include<vector>
using namespace std;

void myfunc(string ans, string nums, vector<string>& v, bool flag){

    if(nums==""){
        v.push_back(ans);
        return;
    }

    char ch = nums[0];

    if(nums.length()==1){
        if(flag==true) myfunc(ans+ch, nums.substr(1),v,true);
        myfunc(ans,nums.substr(1),v,true);
        return; // this retunr is very very important
    }

    char dh = nums[1];

    if(ch==dh){
        if(flag==true) myfunc(ans+ch, nums.substr(1),v,true);
        myfunc(ans,nums.substr(1),v,false);
    }

    else{
        if(flag==true) myfunc(ans+ch, nums.substr(1),v,true);
        myfunc(ans,nums.substr(1),v,true);
    }

}

int main(){
    string str = "abc";
    vector<string> v;
    myfunc("",str,v,true);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }

}


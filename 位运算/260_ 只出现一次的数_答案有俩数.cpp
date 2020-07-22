#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    int ans1=0,ans2=0;
    cin>>n;
    vector<int> nums;
    while(n--)
    {
        int i;
        cin>>i;
        nums.push_back(i);
        ans1^=i;
    }
    int k=ans1&-ans1;
    k--;
    for(auto x:nums)
    {
        if(x>>k&1)
            ans2^=x;
    }
    ans1^=ans2;
    cout<<ans2<<" "<<ans1<<endl;
    return 0;
}


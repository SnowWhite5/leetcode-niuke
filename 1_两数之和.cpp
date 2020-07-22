#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    int target;
    cin>>n;
    vector<int> nums;
    while(n--)
    {
        int i;
        cin>>i;
        nums.push_back(i);
    }
    cin>>target;

    unordered_map<int,int> dict;
    vector<int> ans(2,0);
    for(int i=0;i<nums.size();++i)
    {
        if(dict.count(target-nums[i]))
        {
            ans[0]=dict[target-nums[i]];
            ans[1]=i;
            break;
        }
        else
            dict[nums[i]]=i;
    }
    for(auto a:ans)
        cout<<a<<endl;
    return 0;
}


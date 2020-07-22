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


    vector<int> ans(2,0);
    int low=0,high=nums.size()-1;
    while(low<=high)
    {
        int tmp=nums[low]+nums[high];
        if(tmp<target) low++;
        else if(tmp>target) high--;
        else
        {
            ans[0]=low+1;
            ans[1]=high+1;
            break;
        }
    }
    for(auto a:ans)
        cout<<a<<endl;
    return 0;
}


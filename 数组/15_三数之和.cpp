#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){
    int n,t;
    vector<int> nums;
    scanf("%d",&n);
    t=n;
    while(t--)
    {
        int i;
        scanf("%d",&i);
        nums.push_back(i);
    }
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n-1;++i)
    {
        if(nums[i]>0) break;
        if(i>0 && nums[i]==nums[i-1]) continue;
        int l=i+1,r=n-1,tar=0-nums[i];
        while(l<r)
        {
            if(nums[l]+nums[r]==tar)
            {
                ans.push_back({nums[i],nums[l],nums[r]});
                while(l<r && nums[l]==nums[++l]);
                while(l<r && nums[r]==nums[--r]);
            }
            else  if((nums[l]+nums[r])<tar) l++;
            else if((nums[l]+nums[r])>tar) r--;
        }
    }
    for(int i=0;i<ans.size();++i)
    {
        for(int j=0;j<3;++j) printf("%d ",ans[i][j]);
        printf("\n");
    }
    return 0;
}


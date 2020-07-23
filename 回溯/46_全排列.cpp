#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
using namespace std;
void swap(vector<int>& n,int i,int j)
{
    int t=n[i];
    n[i]=n[j];
    n[j]=t;
}
void help(vector<vector<int>>& ans,vector<int>& n,int k)
{
    if(k==n.size()) ans.push_back(n);
    for(int i=k;i<n.size();++i)
    {
        swap(n,i,k);
        help(ans,n,k+1);
        swap(n,i,k);
    }
}
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
    help(ans,nums,0);
    for(int i=0;i<ans.size();++i)
    {
        for(int j=0;j<nums.size();++j) printf("%d ",ans[i][j]);
        printf("\n");
    }
    return 0;
}


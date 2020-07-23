#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;

int main(){
    int n,m,t;
    vector<int> num1,num2;
    cin>>n;
    t=n;
    while(t--)
    {
        int i;
        cin>>i;
        num1.push_back(i);
    }
    cin>>m;
    t=m;
    while(t--)
    {
        int i;
        cin>>i;
        num2.push_back(i);
        num1.push_back(0);
    }
    if(n==0) swap(num1,num2);
    int i=m-1,j=n-1,k=m+n-1;
    while(i>=0 && j>=0)
    {
        if(num2[i]>num1[j])
            num1[k--]=num2[i--];
        else
            num1[k--]=num1[j--];
    }
    while(j) num1[k--]=num2[j--];
    for(auto a:num1)
        printf("%d ",a);
    printf("\n");
    return 0;
}


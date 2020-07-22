#include<iostream>
#include<vector>
#include<unordered_map>
#include<stdio.h>
using namespace std;

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    while(b!=0)
    {
        int c=(unsigned)(a&b)<<1;//进位
        a=a^b;//不带进位的加法
        b=c;
    }
    cout<<a<<endl;
    return 0;
}


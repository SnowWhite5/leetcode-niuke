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
        int c=(unsigned)(a&b)<<1;//��λ
        a=a^b;//������λ�ļӷ�
        b=c;
    }
    cout<<a<<endl;
    return 0;
}


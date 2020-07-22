#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    int ans=0;
    cin>>n;
    int ones=0,twos=0;
    while(n--)
    {
        int i;
        cin>>i;
        ones=ones^i & ~twos;
        twos=twos^i & ~ones;
    }
    cout<<ones<<endl;
    return 0;
}


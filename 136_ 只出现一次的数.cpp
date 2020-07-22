#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    int ans=0;
    cin>>n;
    vector<int> nums;
    while(n--)
    {
        int i;
        cin>>i;
        ans ^=i;
    }

    cout<<ans<<endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        if(x<k){
            cout<<1<<endl;
            cout<<x<<endl;
        }
        else if(x % k != 0){
            cout<<1<<endl;
            cout<<x<<endl;
        }
        else{
            cout<<2<<endl;
            cout<<x-1<<" "<<1<<endl;
        }
    }
    return 0;
}
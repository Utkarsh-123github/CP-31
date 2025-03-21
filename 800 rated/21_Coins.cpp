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
        long long n,k;
        cin>>n>>k;
        if(n%k == 0 || n%2 == 0){
            cout<<"Yes"<<endl;
        }
        else if((n-k)%2 == 0){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }

    return 0;
}
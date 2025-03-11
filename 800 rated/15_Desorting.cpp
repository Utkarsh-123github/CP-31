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
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int mini = INT_MAX;
        for(int i=1;i<n;i++){
            mini = min(mini,arr[i]-arr[i-1]);
            if(mini < 0)break;
        }
        if(mini < 0){
            cout<<0<<endl;
        }
        else{
            cout<<(mini/2)+1<<endl;
        }
    }

    return 0;
}
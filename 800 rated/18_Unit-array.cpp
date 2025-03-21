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
        int cnt1 = 0, cnt2 = 0;
        for(int i=0;i<n;i++){
            if(arr[i] == -1)cnt1++;
            else cnt2++;
        }
        int ans = 0;
        while(cnt1 > cnt2){
            cnt1--;
            cnt2++;
            ans++;
        }
        if(cnt1 % 2 != 0)ans++;
        cout<<ans<<endl;
    }

    return 0;
}
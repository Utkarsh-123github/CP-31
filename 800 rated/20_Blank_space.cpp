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
        int maxCount = 0;
        int index = 0;
        int cnt = 0;
        while(index<n){
            if(arr[index] == 0){
                cnt++;
                maxCount = max(maxCount,cnt);
                index++;
            }
            else{
                cnt = 0;
                index++;
            }
        }
        cout<<maxCount<<endl;
    }

    return 0;
}
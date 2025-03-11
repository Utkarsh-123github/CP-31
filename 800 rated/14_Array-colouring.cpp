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
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += arr[i];
        }
        if(sum % 2 == 0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
 
    return 0;
}
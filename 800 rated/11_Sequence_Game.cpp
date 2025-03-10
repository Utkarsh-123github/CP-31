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
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<int>ans;
        ans.push_back(b[0]);
        for(int i=1;i<n;i++){
            // If increasing add only current element 
            if(b[i]>=b[i-1]){
                ans.push_back(b[i]);
            }
            else{
                ans.push_back(1);                
                ans.push_back(b[i]);
            }
        }
        int sz = ans.size();
        cout<<sz<<endl;
        for(int i=0;i<sz;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
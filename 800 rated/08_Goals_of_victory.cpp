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
        vector<int>arr(n-1);
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
        }
        int sum = 0;
        for(auto it:arr){
            sum += it;
        }

        cout<<-sum<<endl;

    }
    return 0;
}
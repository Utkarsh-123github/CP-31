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
    
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            mini = min(mini,-arr[i]);
        }
        else mini = min(mini,arr[i]);
    }
    cout<<mini;

    return 0;
}
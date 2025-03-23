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
        int x_or = arr[0];
        for(int i=1;i<n;i++){
            x_or = x_or^arr[i];
        }
        if(n%2 == 0){
            if(x_or == 0){
                cout<<2<<endl;
            }
            else cout<<-1<<endl;
        }
        else{
            cout<<x_or<<endl;
        }
    }
 
    return 0;
}
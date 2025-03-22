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
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(arr[i] == 2)cnt++;
        }
        if(cnt == 0){
            cout<<1<<endl;
        }
        else if(cnt%2 != 0){
            cout<<-1<<endl;
        }
        else{
            int i=0,k=0;
            while(k!=cnt/2){
                if(arr[i] == 2)k++;
                i++;
            }
            cout<<i<<endl;
        }
    }

    return 0;
}
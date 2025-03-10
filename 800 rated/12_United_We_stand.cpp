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
        vector<int>b,c;
        sort(arr.begin(),arr.end());
        b.push_back(arr[0]);
        int idx = 0;
        while(idx<n-1 && arr[idx] == arr[idx+1]){
            b.push_back(arr[idx]);
            idx++;
        }
        if(idx<n){
            for(int i=idx+1;i<n;i++){
                c.push_back(arr[i]);
            }
        }
        if(c.size() == 0){
            cout<<-1;
        }
        else{
            cout<<b.size()<<" "<<c.size()<<endl;
            for(int i=0;i<b.size();i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i=0;i<c.size();i++){
                cout<<c[i]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
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
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mpp[arr[i]]++;
        }
        int x = mpp.size();
        if(x>2){
            cout<<"No"<<endl;
        }
        else if(x == 1){
            cout<<"Yes"<<endl;
        }
        else{
            vector<int>a;
            for(auto it : mpp){
                a.push_back(it.second);
            }
            sort(a.begin(),a.end());
            if(a[1]-a[0] >= 2){
                cout<<"No"<<endl;
            }
            else cout<<"Yes"<<endl;

        }
    }
    return 0;
}
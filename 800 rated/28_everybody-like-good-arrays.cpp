#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&arr){
    int n = arr.size();
    int cnt = 0;
    if(n == 1)return 0;
    int i=0,j=1;
    while(i<n && j<n){
        if(arr[i]%2 != 0){
            if(arr[j]%2 != 0){
                while(arr[j]%2 != 0){
                    cnt++;
                    i++;
                    j++;
                    if(j>=n)break;
                }
            }
            else {
                i++;
                j++;
                if(j>=n)break;
            }
        }
        else if(arr[i]%2 == 0){
            if(arr[j]%2 == 0){
                while(arr[j]%2 == 0){
                    cnt++;
                    i++;
                    j++;
                    if(j>=n)break;
                }
            }
            else{
                i++;
                j++;
                if(j>=n)break;
            }
        }
    }
    return cnt;
}
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
        cout<<solve(arr)<<endl;
    }

    return 0;
}
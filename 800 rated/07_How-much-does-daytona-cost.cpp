#include<bits/stdc++.h>
using namespace std;

int bs(vector<int>&arr, int el){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid] == el){
            return mid;
        }
        else if(arr[mid]<el){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
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
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int idx = bs(arr,k);
        if(idx == -1){
            cout<<"No"<<endl;
        }
        else cout<<"Yes"<<endl;
    }
    return 0;
}
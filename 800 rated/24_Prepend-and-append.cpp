#include<bits/stdc++.h>
using namespace std;

int solve(int n, string s){
    int i=0, j=n-1;
    int ans = n;
    while(i<j){
        if(s[i]!=s[j]){
            i++;
            j--;
            ans -= 2;
        }
        else break;
    }
    return ans;
    
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
        string num ;
        cin>>num;
        cout<<solve(n,num)<<endl;
    }
    
    return 0;



}
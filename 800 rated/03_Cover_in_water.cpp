#include<bits/stdc++.h>
using namespace std;

int solve(string s, vector<int>&vis){
    int n = s.length();
    for(int i=0;i<n;i++){
        if(s[i] == '#'){
            vis[i] = 1;
        }
    }
    int ans = 0;
    if(n == 1){
        if(s[0] != '#')return 1;
        return 0;
    }
    if(n == 2){
        if(s[0] == '#' && s[1] == '#')return 0;
        else if((s[0] == '#' && s[1] == '.')|| (s[0] == '.' && s[1] == '#'))return 1;
        return 2;

    }
    bool flag = false;
    for(int i=0;i<n-2;i++){
        if(vis[i] == 0 && vis[i+2] == 0 && vis[i+1] == 0){
            flag = true;
            break;
        }
    }
    if(flag == true)return 2;
    for(int i=0;i<n;i++){
        if(vis[i] == 0)ans++;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>vis(n,0);
        cout<<solve(s,vis)<<endl;
    }

    return 0;
}
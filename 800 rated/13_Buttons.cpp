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
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b && c%2 == 1){
            cout<<"First"<<endl;
        }
        else if(a == b && c%2 == 0){
            cout<<"Second"<<endl;
        }
        else if(a<b && a+c == b){
            cout<<"Second"<<endl;
        }
        else if(a>b && b+c == a){
            cout<<"First"<<endl;
        }
        else if(a>b){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    }

    return 0;
}
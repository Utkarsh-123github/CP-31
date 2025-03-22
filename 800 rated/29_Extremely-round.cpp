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
        int totalDigits = 0;
        int firstDigit = 0;
        while(n>0){
            totalDigits++;
            firstDigit = n;
            n = n/10;
        }
        cout<<(9*(totalDigits-1) + firstDigit)<<endl;

    }
 
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

// Brute approach
// int main()
// {
//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int>arr(n);
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         int x = n;
//         while(x>0){
//             for(int i=1;i<n-1;i++){
//                 if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
//                     swap(arr[i],arr[i+1]);
//                 }
//             }
//             x--;
//         }
        
//         bool flag = true;
//         for(int i=0;i<n-1;i++){
//             if(arr[i]>arr[i+1]){
//                 flag = false;
//                 break;
//             }
//         }

//         if(flag == false)cout<<"No"<<endl;
//         else cout<<"Yes"<<endl;
//     }


//     return 0;
// }

// Optimal approach
// On observing we find that if the first element of array is 1 then only we can sort the array otherwise it is not possible to sort the array

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
        if(arr[0] == 1){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
    return 0;
}
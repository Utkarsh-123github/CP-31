#include<bits/stdc++.h>
#include<iostream>
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
        vector<vector<char>>grid(10,vector<char>(10));
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>grid[i][j];
            }
        }

        vector<vector<int>>arr(10,vector<int>(10));
        int num = 1;
        int top = 0, left = 0, right = 9, bottom = 9;
        while(top<10 && bottom >=0 && left < 10 && right >=0){
            for(int i=left;i<=right;i++){
                arr[top][i] = num;
            }
            top++;
            for(int i = top;i<=bottom;i++){
                arr[i][right] = num; 
            }
            right--;
            for(int i=right;i>=left;i--){
                arr[bottom][i] = num;
            }
            bottom--;
            for(int i=bottom;i>=top;i--){
                arr[i][left] = num;
            }
            left++;
            num++;
        }

        int total = 0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(grid[i][j] == 'X'){
                  total += arr[i][j];  
                }
            }
        }
        cout<<total<<endl;
    }

    return 0;
}
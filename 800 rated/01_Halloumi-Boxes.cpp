// Problem Link : https://codeforces.com/problemset/problem/1903/A

// Theofanis is busy after his last contest, as now, he has to deliver many halloumis all over the world. He stored them inside n
//  boxes and each of which has some number 
//  written on it.

// He wants to sort them in non-decreasing order based on their number, however, his machine works in a strange way. It can only reverse any subarray†
//  of boxes with length at most k
// .

// Find if it's possible to sort the boxes using any number of reverses.

// Hints and Observations:
// Hint 1 : An array can be sorted if it’s possible to swap ANY 2 elements while keeping the order of other elements intact.
// Hint 2 : Swapping of 2 elements is a big requirement. Think small, if you are only allowed to swap any 2 adjacent elements, can you still sort the array?
// Hint 3 : In fact, using just adjacent swaps, it is possible to swap 2 arbitrary elements. How?
// Hint 4 : If k >= 2, then adjacent swaps are allowed, hence, arbitrary swaps are also allowed. Hence, sorting is always possible. In fact, Insertion Sort relies on the idea of adjacent swaps.

#include<bits/stdc++.h>
using namespace std;

bool solve(vector<int>&arr, int k){
    int n = arr.size();
    if(k == 1){
        vector<int>copyarr = arr;
        sort(copyarr.begin(),copyarr.end());
        for(int i=0;i<n;i++){
            if(arr[i] != copyarr[i])return false;
        }
    }
    return true;
}

int main(){

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
        if(solve(arr,k)){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
    return 0;
}
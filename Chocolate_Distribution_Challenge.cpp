// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    // 1,3,4,7,9,9,12,56
    // 2,3,4,7,9,12,56
    long long min_diff=INT_MAX;
    sort(a.begin(),a.end());
    for(long long i=0;i+m-1<n;i++){
        min_diff=min(min_diff,a[i+m-1]-a[i]);
    }
    return min_diff;
    }   
};

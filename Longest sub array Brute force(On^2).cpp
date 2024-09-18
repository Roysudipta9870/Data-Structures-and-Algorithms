#include <bits/stdc++.h>
using namespace std;
int longestSubArray(int arr[], int k, int n){
    int len = 0;
    for(int i = 0; i<n; i++){
        long long sum = 0;
        for(int j = i; j<n; j++){
            sum = sum + arr[j];
             if(sum == k){
                len = max(len, j-i+1);
            }
        }
    }
    return len;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout << longestSubArray(arr, k, n);

    return 0;
}
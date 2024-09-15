#include <bits/stdc++.h>
using namespace std;

    int longestSubArr(vector<int> &a, int k, int n){
    // int n = a.size();
    int len = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = i; j<n; j++){
            long long sum = 0;
            for(int K = i; K<=j; K++){
                sum = sum + a[K];
            }
            if(sum == k){
                len = max(len, j - i + 1);
            }
         
    }
 
    }
    return len;

}

int main(){
    int n ;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;

    cout << longestSubArr(arr, k, n);


    return 0;
}

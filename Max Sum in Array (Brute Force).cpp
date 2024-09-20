#include <bits/stdc++.h>
using namespace std;
int maxSumInArray(int arr[], int n){
    long long maxi = INT_MIN;
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            long long sum = 0;
            for(int K = i; K<=j; K++){
                sum+=arr[K];
                
            }
            maxi = max(maxi,sum);
        }
    }
    return maxi;
}

int main()
{
    
int n;
cin >> n;
int arr[n];
for(int i = 0; i<n; i++){
    cin >> arr[i];
}

cout << maxSumInArray(arr, n);

    return 0;
}
//Time Complexity = O(n^3)
//Space Complexity = O(1)
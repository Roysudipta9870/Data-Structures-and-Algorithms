#include <bits/stdc++.h>
using namespace std;
int maxSumInArray(int arr[], int n){
  long long maxi = INT_MIN;
  for(int i = 0; i<n; i++){
    long long sum = 0;
    for(int j = i; j<n; j++){
      sum += arr[j];
      maxi = max(maxi, sum);
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
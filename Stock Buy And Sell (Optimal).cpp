#include <bits/stdc++.h>
using namespace std;

int buyStockAndSell(int arr[], int n){
    //Time Complexity O(n^2)
    // Space Complexity O(1)
    int maxProfit = 0;
    for(int i=0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[j]>arr[i]){
                maxProfit = max(arr[j] - arr[i], maxProfit);
            }
        }
    }
    return maxProfit;
}

int buyStockAndSell1(int arr[], int n){
    //Time Complexity O(n)
    // Space Complexity O(1)
    int minPrice = INT_MAX;
    int maxProfit = 0;
    
    for(int i = 0; i<n; i++){
        minPrice = min(minPrice, arr[i]);
        maxProfit = max(maxProfit, arr[i]-minPrice);
    }
    
    return maxProfit;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    cout << buyStockAndSell1(arr, n);
	
	return 0;
}
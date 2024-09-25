#include <bits/stdc++.h>
using namespace std;

int buyAndSellStocks(int arr[], int n){
    int maxProfit = 0;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[j]>arr[i]){
                maxProfit=max(arr[j]-arr[i], maxProfit);
            }
        }
    }
    return maxProfit;
}


int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
    cout << buyAndSellStocks(arr, n);
	return 0;
}
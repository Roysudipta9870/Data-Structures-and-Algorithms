#include<bits/stdc++.h>

using namespace std;
int kadaneAlgorithm(int arr[], int n) {
    long long sum = 0;
    long long maxi = INT_MIN;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        maxi = max(sum, maxi);

        if (sum < 0) {
            sum = 0;
        }
    }
    return maxi;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << kadaneAlgorithm(arr, n);
    return 0;

}

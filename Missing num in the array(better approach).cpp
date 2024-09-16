
#include <bits/stdc++.h>
using namespace std;
int missingNum(int arr[], int n){
    int hash[n+1] = {0};
    for(int i = 0; i<n-1; i++){
        hash[arr[i]] = 1;
    }
    for(int i = 1; i <= n; i++){
        if(hash[i] == 0){
            return i;
        }
    }
    return 0;
    
}

int main()
{
int n ;
cin >> n;
int arr[n-1];
for (int i =0; i<n-1; i++){
    cin >> arr[i];
}
cout <<missingNum(arr, n);
   
    return 0;
}

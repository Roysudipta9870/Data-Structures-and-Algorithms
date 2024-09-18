#include<bits/stdc++.h>
using namespace std;

void sortArray(int arr[], int n){
    int cnt_0 = 0;
    int cnt_1 = 0;
    int cnt_2 = 0;
    
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            cnt_0++;
        }else if(arr[i] == 1){
            cnt_1++;
        }else{
            cnt_2++;
        }
    }
    
    for(int i = 0; i < cnt_0; i++){
        arr[i] = 0;
    }
    for(int i = cnt_0; i < cnt_0 + cnt_1; i++){
        arr[i] = 1;
    }
    for(int i = cnt_0 + cnt_1; i < n; i++){
        arr[i] = 2;
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    sortArray(arr, n);

    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }


    return 0;
}
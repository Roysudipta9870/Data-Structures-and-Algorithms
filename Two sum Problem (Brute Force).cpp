#include<bits/stdc++.h>
using namespace std;

vector<int> twoSumProblem(int arr[], int n, int target){
    vector<int>ans;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i ==j) continue;
            if(arr[i] + arr[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans; 
            }
        }
    }
    return{-1,-1};
}

void print(vector<int>& a){
    int n = a.size();
    for(int i = 0; i<n; i++){
        cout << a[i] << " ";
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;

    vector<int> finalArray = twoSumProblem(arr, n, target);
    print(finalArray);


    
    return 0;
}

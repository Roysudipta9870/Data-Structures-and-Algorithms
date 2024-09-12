#include <bits/stdc++.h>
using namespace std;
   int findMaxConsecutiveOnes(vector<int> a){
        int cnt = 0;
        int maxi = 0;
        for(int i = 0; i<a.size(); i++){
            if(a[i] == 1){
                cnt++;
                maxi = max(maxi, cnt);
            }else{
                cnt = 0;
            }
        }
        return maxi;
    }

int main(){

        int n ;
    cin >>n;
    vector<int> nums(n);
    
    for(int i = 0; i<n; i++){
        cin >> nums[i];
    }
    cout << findMaxConsecutiveOnes(nums);



    return 0;
}
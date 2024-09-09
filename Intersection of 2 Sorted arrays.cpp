#include <bits/stdc++.h>
using namespace std;
vector<int> FindArrIntersection(vector<int> a, int n, vector<int> b, int m ){
    vector<int> ans;
    int visArr[m] = {0};
    for(int i = 0; i<n; i++){
        for(int j =0; j<m; j++){
            if(a[i] == b[j] && visArr[j] == 0){
                ans.push_back(a[i]);
                visArr[j] = 1;
                break;
            }
            
            if(b[j] > a[i]) break;
        }
    }
    
    return ans;
}

int main()
{
     int n ;
    cin >> n;
    vector<int> arr1(n);
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    int m;
    cin >> m;
    vector<int> arr2(m);
    for(int i = 0; i < m; i++){
        cin >> arr2[i];
    }
    
   vector <int> results = FindArrIntersection(arr1, n, arr2, m);

   for(int i = 0; i < results.size(); i++){
    cout << results[i] << " ";
   }

    return 0;
}
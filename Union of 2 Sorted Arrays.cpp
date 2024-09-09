#include<bits/stdc++.h>
using namespace std;

vector<int> UnionOfTwoSortedArr(vector<int> a, vector<int> b){
    int a1 = a.size();
    int b1 = b.size();

    int i = 0;
    int j = 0;
    vector<int> UnionArr;

    while(i<a1 && j<b1){
        if(a[i]<=b[j]){
            if(UnionArr.size() == 0 || UnionArr.back() != a[i]){
                UnionArr.push_back(a[i]);
            }
            i++;
        }else{
            if(UnionArr.size() == 0 || UnionArr.back() != b[j]){
                UnionArr.push_back(b[j]);
            }
            j++;
        }

        }
        while(j<b1){
            if(UnionArr.size() == 0 || UnionArr.back() != b[j]){
                UnionArr.push_back(b[j]);
            }
            j++;
        }
        while(i<a1){
            if(UnionArr.size() == 0 || UnionArr.back() != a[i]){
                UnionArr.push_back(a[i]);
            }
            i++;
        }
        return UnionArr;
}
int main(){

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
    
   vector <int> results = UnionOfTwoSortedArr(arr1, arr2);

   for(int i = 0; i < results.size(); i++){
    cout << results[i] << " ";
   }

    return 0;
}
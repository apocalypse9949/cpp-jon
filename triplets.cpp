
#include <bits/stdc++.h>
using namespace std;

bool triplet(vector<int> & arr, int target ){
    int n  = arr.size();
    for(int i =0;i<n-2;i++ ){
        unordered_set<int> st;
        for(int k = i+1;k < n;k++){
            int secod = target - arr[i] - arr[k];
            if(st.find(secod) != st.end()){
                return true;
            }
            st.insert(arr[k]);
        }
    }
    return false;
}
int main(){
    int k,target;
    cin >> k;
    cin>>target;
    vector<int> arr(k);
    for(int i = 0; i<k;i++){
        cin >> arr[i];
    }
    if(triplet(arr,target)) cout << "true" << endl;
    else    cout<<"false"<<endl;
}

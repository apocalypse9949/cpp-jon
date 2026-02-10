// Online C++ compiler to run C++ program online

#include<bits/stdc++.h>
using namespace std;
int smallest(vector<int> &arr){
    int total = accumulate(arr.begin(),arr.end(),0);
    sort(arr.begin(),arr.end(),greater<int>());
    int res = 0;
    int currsum =0 ;
    for(int x : arr){
        currsum += x;
        res++;
    
    if(currsum > total - currsum){
        return res;
    }
}
    return res;
}
int main() {
    int n;
    cin >> n;
    // Write C++ code here
    vector<int>arr(n);
    
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    cout<<smallest(arr)<<endl;

    return 0;
}

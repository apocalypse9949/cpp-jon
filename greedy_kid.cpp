// Given two arrays, greed[] and cookie[] such that greed[i] denotes the minimum cookie size wanted by ith child and cookie[i] denotes the size of ith cookie, we have to find the maximum number of children that can be satisfied by assigning them cookies, with each child getting at most 1 cookie.

// Note: A child will be satisfied if he is assigned a cookie of size at least equal to his greed. In other words, the ith child will be satified with jth cookie only if greed[i] <= cookie[j].

// Examples:

// Input: greed[] = [1, 10, 3], cookie[] = [1, 2,3]
// Output: 2
// Explanation: We can only assign  cookie to the first child and third child.
#include<bits/stdc++.h>
using namespace std;
int satifist(vector<int> &greedy,vector<int> &cookie){
    sort(greedy.begin(),greedy.end());
    sort(cookie.begin(),cookie.end());
    int i = 0,j =0 ;
    int rnc =0 ;
    while(i < greedy.size() && j < cookie.size()){
       if(greedy[i] <= cookie[j]){
           rnc++;
           i++;
           j++;
       } else{
           j++;
       }
       
    }
    return rnc;
}
int main() {
    int n;
    cin >> n;
    
    vector<int> greedy(n);
    vector<int> cookie(n);
    for(int i =0 ;i<n;i++){
        cin >> greedy[i];
    
    }
    int m;
    cin >> m;
    for(int j= 0 ;j < n; j++){
        cin >> cookie[j];
    }    // vector<int> greedy = {1, 10, 3};
    // vector<int> cookie = {1, 2,3};
    cout<<satifist(greedy,cookie)<<endl;

    return 0;
}

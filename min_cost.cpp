
#include<bits/stdc++.h>
using namespace std;
int cost(vector<int>&a){
    int n = a.size();
    return (n-1) * (*min_element(a.begin(),a.end()));
    
}

int main() {
    int n ;
    cin >> n;
    
    vector<int> a(n);
    for(int i =0;i<n;i++){
        cin >> a[i];
    }
    
    cout<<cost(a)<<endl;
    return 0;

    return 0;
}

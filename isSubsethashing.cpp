
#include <bits/stdc++.h>
using namespace std;

bool issubset(vector<int>&a ,vector<int>&b){
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int m = a.size();
    int n = b.size();
    int i = 0,j =0;
    while(i < n && j < m){
        if(a[i] < b[j]){
            i++;
        }else if(a[i] == b[j]){
            i++;
            j++;
        }else{
            return false;
        }
    }
    return (j == n);
}
int main()
{
    int n,m;
   
    
    cin >> n;
    cin >> m;
     vector<int> a(n);
    vector<int> b(m);
    for(int i =0;i<n;i++){
        cin >> a[i];
    }
    for(int  j=0;j<m;j++){
        cin >> b[j];
    }
    if(issubset(a,b))cout << "true"<<"\n";
    else cout << "false"<<"\n";
    

    return 0;
}

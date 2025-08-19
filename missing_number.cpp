
#include <iostream>
using namespace std;

int main() {
   int n;
   cin >> n;
   int miss ;
   int tot = 0;
   
   int arr[n];
   
   for(int i= 0;i<n;i++){
       cin >> arr[i];
   }
   int len = sizeof(arr)/sizeof(arr[0]);
   int ni = len +1;
   
    int misss = (ni*(ni+1))/2;
    for(int i =0;i<n;i++){
    tot = tot + arr[i];
}
   miss = misss - tot;
    cout<<miss<<endl;
   

    return 0;
}

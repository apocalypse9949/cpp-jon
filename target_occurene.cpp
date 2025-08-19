
#include <iostream>
using namespace std;
int main() {
    int n;
    int count = 0;
    int target;
    cin >> n;
    cin >> target;
     int arr[n];
     for(int i =0;i<n;i++){
         cin >> arr[i];
     }
     for(int i =0;i<n;i++){
     if(arr[i] == target){
         count++;
     }
     }
     cout<<count<<endl;
     
    

    return 0;
}

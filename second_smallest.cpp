
#include <iostream>
#include <climits>
using namespace std;
int main() {
   
int arr[5] = {1,2,4,6,5};
int second = INT_MAX;
int n = sizeof(arr) / sizeof(arr[0]);
int first = arr[0];
for(int i=1;i<n;i++){
    if(arr[i]<first){
        second=first;
        first=arr[i];
        
    }else if(arr[i]<second){
        second = arr[i];
    
}
}
cout<<second<<endl;

    
    
}

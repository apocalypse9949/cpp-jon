
//sort and also couuunt swaps after bubble sort print how many were required to sort
#include <iostream>
using namespace std;
int countswaps(int arr[],int n){
    int count = 0;
    for(int i =0;i< n - 1;i++){
        bool swap = false;
        for(int j =0;j-i-1;j++){
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
                count++;
                swap = true;
                
            }
        }
        if(!swap) break;
    }
    return count;
}
int main() {
    int arr[] = {1,4,3,45,5,8,9,7};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    int count = countswaps(arr,n);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
        
        
    }
    cout<<endl;
    cout<<count;
   

    return 0;
}

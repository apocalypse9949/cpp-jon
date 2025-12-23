// bubble sort for sort array only first half of the array for n/2 elements
#include <iostream>
#include<vector>
using namespace std;
void bubblesort(int arr[],int n){
    int half = n/2;
    
    for(int i =0; i<=half-1;i++){
        for(int j =0;j < half -i-1;j++){
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int arr[] = {1,4,3,45,5,8,9,7};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    bubblesort(arr,n);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
        
        
    }
   

    return 0;
}

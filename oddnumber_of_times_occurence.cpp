
#include <iostream>
using namespace std;

int main() {
    long long num ;
    cin >> num;
    int count[10] = {0};
    long long temp = num;
    while(temp > 0){
        int digit = temp%10;
        count[digit]++;
        temp /= 10;
        
    }
   
    bool found = false;
    for(int i =0;i<10;i++){
        if(count[i]%2 == 1){
            cout<<count[i];
            found = true;
        }
        }
        if(!found){
            cout<<"none";
        }
        cout<<endl;
    
    

    return 0;
}

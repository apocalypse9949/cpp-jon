
#include <iostream>
using namespace std;

    int neonnum(int n){
        int squre = n*n;
        int sum=0;
        while(squre != 0){
            sum =sum + squre%10;
            squre = squre/10;
        }
        return (sum == n);
    }
    int main(){
        int n;
        cin >> n;
        for(int i =1 ;i<=n;i++){
            if(neonnum(i)){
            cout<<i<<" ";
        }
    
}
    return 0;
}


#include <iostream>
using namespace std;

int isprime(int n){
    if(n<2) return 0;
    for(int i = 2;i<n/2;i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}
int nearest_prime(int n){
    int prime = 0;
    for(int i = n-1;i>=2;i--){
        if(isprime(i)){
            prime = i;
            break;
            
        }
    }
    return prime;
}
int main() {
    int n;
    cin >> n;
    int prime = nearest_prime(n);
    if(prime == 0){
        cout<<"no prime";
    }else{
    cout<<prime<<endl;
}
    

    return 0;
}

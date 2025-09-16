
#include <iostream>
using namespace std;

int kth_not(int n,int k){
    
    int result = k + (k -1) / (n-1);
    return result;
}
int main() {
    int n,k;
    cin >> n >> k;
    cout<<kth_not(n,k)<<endl;
    

    return 0;
}

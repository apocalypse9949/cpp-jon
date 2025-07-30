// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
// int main() {
//  int s = 123;
//  int x;
//  string str;
// while(s != 0){
    
//     x=s%10; // s = 12    3 then s =1   and s=0 then store it in x
//     cout<<x<<" ";
//     s=s/10;
//     str=str + " " + to_string(x);
    
// }
// cout<<str;


//     // cout<<s<<endl;


//     return 0;
// }
int main(){
    int s = 123;
    int rev=0;
    int x;
    // string str;
    while( s != 0){
        x=s%10;
        rev=rev*10+x;
        s /= 10;
        
    }
    cout<<rev;
    
        
    
    // string str = to_string(n);
    // for(char s : str){
    //     cout<<s<<" ";
    // }
    cout<<endl;
    return 0;
    
}

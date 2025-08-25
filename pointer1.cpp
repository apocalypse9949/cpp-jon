
#include <iostream>
using namespace std;
int main() {
    int m = 29;
    int *z = &m;
    cout<<&m<<endl;
     int* ab = &m;
     
    
    cout<<&ab<<endl;
    cout<<*ab<<endl;
    m = 34;
       cout<<&ab<<endl;
    cout<<*ab<<endl;
    m = 7;
       cout<<&ab<<endl;
    cout<<*ab<<endl;
    
    

    return 0;
}


#include <iostream>
using namespace std;
int main() {
   int *m = new int (200);
   double *fx = new double(300.60006);
   char *cht = new char ('z');
   
   cout<<&m<<endl;
   cout<<&fx<<endl;
   cout<<&cht<<endl;
   cout<<*m<<endl;
   cout<<*fx<<endl;
   cout<<*cht<<endl;
   cout<<m<<endl;
    cout<<fx<<endl;
     cout<<cht<<endl;
   
   

    return 0;
}

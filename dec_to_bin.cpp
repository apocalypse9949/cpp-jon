
#include <iostream>

using namespace std;
int main() {
int n,sum =0,binary[32],i=0;

cin >> n;
int tem = n;
while(tem>0){
    binary[i] = tem%2;
    tem = tem/2;
    i++;
}
cout<<sum;
for(int j = i-1;j>=0;j--)
{
   cout<<binary[j]; 
}
cout<<"\n";
return 0;
}

#include <iostream>
#include<vector>
using namespace std;

int findMin(int n)
{
    int count=0; 
    vector<int> denomination = { 1, 2, 5, 10 };
    for (int i = denomination.size() - 1; i >= 0; i--) {
      count+=n/denomination[i];
      n=n%denomination[i];
   
    }
    return count; 
}

int main()
{
   
    int n ;
    cin >> n;
    cout<<findMin(n);
    return 0;
}

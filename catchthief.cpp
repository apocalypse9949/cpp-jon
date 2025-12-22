
#include <iostream>
#include<vector>
using namespace std;

int catchThieves(vector<char> &arr, int k) {
    int n = arr.size();
    
    
    vector<bool> caught(n, false); 
    
    int count = 0; 
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 'P') { 
            int start = max(0, i - k); 
            int end = min(n - 1, i + k); 
            
            for (int j = start; j <= end; ++j) {
                if (arr[j] == 'T' && !caught[j]) { 
                    caught[j] = true; 
                    count++; 
                    break; 
                }
            }
        }
    }
    return count; 
}

int main() {
    int k = 1;
    vector<char> arr = { 'P', 'T', 'T', 'P', 'T' };
    cout<< catchThieves(arr, k) << endl;
}

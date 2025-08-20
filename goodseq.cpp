#include <bits/stdc++.h>
using namespace std;

// Function to compute longest alternating subsequence length
int longestAlternating(vector<int>& A, int startParity) {
    int lastParity = -1;
    int length = 0;

    for (int x : A) {
        int parity = x % 2;
        if (lastParity == -1) {
            // pick the first element only if it matches desired start
            if (parity == startParity) {
                lastParity = parity;
                length++;
            }
        } else {
            // pick if parity alternates
            if (parity != lastParity) {
                lastParity = parity;
                length++;
            }
        }
    }
    return length;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; i++) cin >> A[i];

        int oddStart = longestAlternating(A, 1);
        int evenStart = longestAlternating(A, 0);

        cout << max(oddStart, evenStart) << "\n";
    }
    return 0;
}

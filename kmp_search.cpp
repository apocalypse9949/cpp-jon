#include <iostream>
#include <vector>
#include <string>
using namespace std;


void computeLPS(const string &pattern, vector<int> &lps) {
    int m = pattern.length();
    int len = 0; 
    lps[0] = 0;

    int i = 1;
    while (i < m) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0)
                len = lps[len - 1];
            else {
                lps[i] = 0;
                i++;
            }
        }
    }
}


bool KMPSearch(const string &text, const string &pattern) {
    int n = text.length();
    int m = pattern.length();
    if (m == 0) return true;  

    vector<int> lps(m);
    computeLPS(pattern, lps);

    int i = 0; 
    int j = 0; 

    while (i < n) {
        if (pattern[j] == text[i]) {
            i++;
            j++;
        }

        if (j == m) {
            return true; // pattern found
        } else if (i < n && pattern[j] != text[i]) {
            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }
    return false;
}

int main() {
    string text, pattern;
    cout << "Enter main string: ";
    getline(cin, text);
    cout << "Enter substring: ";
    getline(cin, pattern);

    if (KMPSearch(text, pattern))
        cout << pattern << "\" is a substring of \"" << text << "\".\n";
    else
        cout << pattern << "\" is NOT a substring of \"" << text << "\".\n";

    return 0;
}

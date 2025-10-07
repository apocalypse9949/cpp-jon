#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string str1, str2;


    getline(cin, str1);
   
    getline(cin, str2);

   
    str1.erase(remove(str1.begin(), str1.end(), ' '), str1.end());
    str2.erase(remove(str2.begin(), str2.end(), ' '), str2.end());

    if (str1.size() != str2.size()) {
        cout << "not anagram" << endl;
        return 0;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if (str1 == str2)
        cout << "anagram" << endl;
    else
        cout << "not anagram" << endl;

    return 0;
}

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows <= 1)
        return s;

    
     vector<string> g(numRows,"");
     int j = 0 , k = -1;
     for(int i =0;i<s.length();i++){
    if(j == numRows -1 || j == 0) k *= (-1);
    g[j] += s[i];

    if(k == 1) j++;
    else j --; 
     }
     string res;
     for(auto &it : g) res += it;
     return res;
    }
};

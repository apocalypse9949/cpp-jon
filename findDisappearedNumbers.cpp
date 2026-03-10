class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> res;
        for(int i = 1;i<=nums.size();i++)mp[i]++;
        for(auto a : nums) mp[a]--;
        for(auto a : mp){
            if(a.second == 1) res.push_back(a.first);
        }
             

        return res;
        
    }
};

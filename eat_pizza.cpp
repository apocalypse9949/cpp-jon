class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        long long ans =0, totaldays = pizzas.size()/4,oddays = (totaldays + 1)/2;
        sort(pizzas.begin(),pizzas.end(), greater<int>());
        for(int i =0, days = 1; days<=totaldays;++i,++days){
            if(days > oddays) ++i;
         ans += (long long)pizzas[i];

            
        
    }
        return ans;
    }

};

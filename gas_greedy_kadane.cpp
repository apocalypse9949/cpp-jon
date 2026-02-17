class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int k = gas.size();
        int total_gas =0 , total_cost =0;
        int crr_gas = 0,startig_poit = 0;
        for(int i =0 ;i<k;i++){
            total_gas += gas[i];
            total_cost += cost[i];
            crr_gas += gas[i] - cost[i];
        
        if(crr_gas < 0){
            startig_poit = i+1;
            crr_gas = 0; 
        }
        }
        
        return (total_gas<total_cost)?-1:startig_poit;
    
    }
};

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int current =0;
        int start=0;
        int t_fuel=0,t_cost=0;
        for(int i=0;i<gas.size();i++)
        {
            t_fuel+=gas[i];
        }
        for(int i=0;i<cost.size();i++)
        {
            t_cost+=cost[i];
        }
        if(t_fuel<t_cost)
        return -1;
        for(int i=0;i<gas.size();i++)
        {
            current=current+(gas[i]-cost[i]);
            if(current<0)
            {
                start=i+1;
                current=0;
            }
        }
        return start;
    }
};
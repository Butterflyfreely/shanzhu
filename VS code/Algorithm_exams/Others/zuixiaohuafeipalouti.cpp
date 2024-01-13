#include <iostream>
#include <vector>
#include <queue>
using namespace std;


class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        // write code here
        vector<int> dp(cost.size());
        dp[0]=cost[0];
        dp[1]=cost[1];
        if(cost.size()<2)return dp[cost.size()-1];
        
        for(int i=2;i<cost.size();i++)
        {
            dp[i]=min(dp[i-1],dp[i-2])+cost[i];
        }
        
        return dp[cost.size()-1];        
    }
};



int main() {
    vector<int> vec={1,100,1,1,1,90,1,1,80,1};
    Solution s1;
    
    cout<<s1.minCostClimbingStairs(vec);

    system("pause");
    return 0;
}



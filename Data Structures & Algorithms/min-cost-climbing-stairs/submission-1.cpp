#include <cstring>
class Solution {
public:
int dp[102];
int f(int i, vector<int> &cost){
    if(dp[i]!=-1) return dp[i];
    if(i>=cost.size()) return dp[i]=0;
    return dp[i] = min(f(i+1, cost), f(i+2, cost)) + cost[i];
}
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp, -1, sizeof(dp));
        return min(f(0, cost), f(1, cost));

    }
};

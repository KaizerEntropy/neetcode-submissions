#include <cstring>
class Solution {
public:
int dp[102];
int f(int i, vector<int> &nums){
    if(dp[i]!=-1) return dp[i];
    if(i>=nums.size()) return dp[i]=0;
    return dp[i] = max(f(i+1, nums), f(i+2, nums)+nums[i]);
}
    int rob(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        return max(f(0, nums), f(1, nums));
    }
};

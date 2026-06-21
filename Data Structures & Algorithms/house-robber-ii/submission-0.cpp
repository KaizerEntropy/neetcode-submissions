#include <cstring>
class Solution {
public:
int dp[102][2];
int f(int i, int is0th, vector<int> &nums){
    if(dp[i][is0th]!=-1) return dp[i][is0th];
    if(i>=nums.size()) return dp[i][is0th]=0;
    if(i==nums.size()-1){
        if(is0th) return dp[i][is0th]=0;
        else return dp[i][is0th]=nums[i];
    }
    if(i==0){
        return dp[i][is0th]=max(f(i+1, 0, nums), f(i+2, 1, nums)+nums[i]);
    }
    return dp[i][is0th]=max(f(i+1, is0th, nums), f(i+2, is0th, nums)+nums[i]);
}
    int rob(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        return f(0, 0, nums);
    }
};

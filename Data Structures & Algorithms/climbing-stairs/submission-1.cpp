#include <cstring>
class Solution {
public:
int dp[46];
int f(int i){
    //Base case
    if(dp[i]!=-1){
        return dp[i];
    }
    if(i<=1){
        dp[i]=1;
        return 1;
    }
    //Transition
    dp[i] = f(i-1)+f(i-2);
    return dp[i];
}
    int climbStairs(int n) {
        memset(dp, -1, sizeof(dp));
        return f(n);
    }
};

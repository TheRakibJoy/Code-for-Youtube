///Author - RakibJoy
#include<bits/stdc++.h>
int dp[100];
int fib(int n)
{
    if(n==1) return 0;
    if(n==2) return 1;
    if(dp[n]!=-1) return dp[n];
    int res = fib(n-1) + fib(n-2);
    dp[n]=res;
    return res;
}
int main()
{
    memset(dp,-1,sizeof dp);
    return 0;
}

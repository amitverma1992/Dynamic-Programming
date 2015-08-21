#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,c;
    cin>>n>>c;
    int dp[n+1][n+1];
    memset(dp,0,sizeof dp);
    for(int i=0;i<=n;i++){
        dp[i][0]=1;
    }
    for(int i=0;i<=n;i++)
        dp[i][i]=1;
    for(int i=2;i<=n;i++){
        for(int j=1;j<i;j++){
            dp[i][j]=dp[i-1][j-1] + dp[i-1][j];
        }
    }
    cout << dp[n][c]<<endl;

    return 0;
}

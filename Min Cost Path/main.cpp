#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin >>n>> m;
    int arr[n+1][m+1];
    int dp[n+1][m+1];
    memset(dp,0,sizeof dp);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    dp[0][0]=0;
    for(int i=1;i<=n;i++)
        dp[0][i]=dp[0][i-1] + arr[0][i-1];
    for(int j=1;j<=m;j++)
        dp[j][0]=dp[j-1][0] + arr[j-1][0];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            dp[i][j]=min(dp[i-1][j-1], dp[i-1][j]);
            dp[i][j]=min(dp[i][j],dp[i][j-1]);
            dp[i][j]+=arr[i-1][j-1];
        }
    }
    cout << dp[n][m]<<endl;

    return 0;
}

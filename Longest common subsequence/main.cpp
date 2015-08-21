#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    int m= s1.size();
    int n= s2.size();

    int dp[m+1][n+1];
    memset(dp, 0, sizeof dp);

    for(int i=1;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(s1[i]==s2[j])
                dp[i][j]=dp[i-1][j-1] + 1;
            else if (dp[i-1][j]>=dp[i][j-1])
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j]=dp[i][j-1];
        }
    }
    cout << dp[m][n];

    return 0;
}

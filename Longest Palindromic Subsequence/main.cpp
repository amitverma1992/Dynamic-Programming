#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s1;
   cin >> s1;
   int n= s1.size();
   int dp[n+1][n+1];
   for(int i=1;i<n;i++)
    dp[i][0]=0;
   for(int i=0;i<n;i++){
    dp[i][i]=1;
   }
   int j;
   for(int k=2;k<=n;k++){
    for(int i=0;i<n-k+1;i++){
         j= k+i-1;

        if(s1[i]==s1[j] && k==2)
            dp[i][j]=2;
        else{
            if(s1[i]==s1[j])
                dp[i][j]=dp[i+1][j-1] + 2;
            else if(dp[i+1][j]>=dp[i][j-1])
                dp[i][j]=dp[i+1][j];
            else
                dp[i][j]=dp[i][j-1];
        }
    }
   }
   cout << dp[0][n-1];

    return 0;
}

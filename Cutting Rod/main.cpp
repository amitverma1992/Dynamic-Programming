#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin >> a[i];
    int dp[n+1];
    memset(dp,-1,sizeof dp);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
                if(dp[i]<=a[j]+dp[i-j])
            dp[i]=a[j]+dp[i-j];
        }

    }
    cout << dp[n]<<endl;
    return 0;
}

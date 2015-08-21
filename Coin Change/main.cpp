#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    int a[x+1];
    for(int i=0;i<x;i++){
        cin >> a[i];
    }
    int dp[n+1];
    memset(dp,0,sizeof dp);
    dp[0]=1;
    for(int i=0;i<x;i++){
            for(int j=a[i];j<=n;j++){
                dp[j]+=dp[j-a[i]];

            }

    }
    cout << dp[n]<<endl;
    return 0;
}

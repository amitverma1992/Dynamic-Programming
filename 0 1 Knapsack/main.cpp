#include <bits/stdc++.h>

using namespace std;

 typedef vector<int> vi;
 typedef vector<vi> vvi;
 typedef pair<int,int> ii;
 #define pb push_back
 #define all(c) (c).begin(),(c).end()
 #define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
 #define present(c,x) ((c).find(x) != (c).end())
 #define cpresent(c,x) (find(all(c),x) != (c).end())
 #define ll long long
 #define rep(i, a, b) for (int i = int(a); i < int(b); i++)
 #define INF 1000000000

int main()
{
    int n;
    cin >> n;
    bool ch;
    vector<ii> v(n+1);
    for(int i=1;i<=n;i++){
        cin>> v[i].first;
        cin >>v[i].second;
    }
    int maxw;
    cin >> maxw;
    int b[n+1][maxw+1];
    for(int i=0;i<=maxw;i++)
        b[0][i]=0;
    for(int i=0;i<=n;i++)
        b[i][0]=0;
    for(int w=1;w<=maxw;w++){
        for(int i=1;i<=n;i++){

            if(b[i-1][w]>=b[i-1][w-v[i].first] + v[i].second)
                b[i][w]=b[i-1][w];
            else
                b[i][w]=b[i-1][w-v[i].first] + v[i].second;
        }
    }
     cout <<b[n][maxw];

    return 0;
}

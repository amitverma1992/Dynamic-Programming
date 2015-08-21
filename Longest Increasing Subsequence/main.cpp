#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n+1];
    int lis[n+1];
    memset(lis,0,sizeof lis);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    lis[0]=1;
    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(lis[i]<=lis[j] + 1 && arr[i]>arr[j])
                lis[i]=lis[j] + 1;
        }
    }
    cout << lis[n-1]<<endl;
    return 0;
}

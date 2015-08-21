#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n+1];
    int lis[n+1];
    int lis2[n+1];
    memset(lis,0,sizeof lis);
    memset(lis2,0,sizeof lis2);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
   // for(int i=0;i<n;i++){
        lis[0]=1;
        lis2[n-1]=1;
   // }

    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(lis[i]<=lis[j] + 1 && arr[i]>arr[j])
                lis[i]=lis[j] + 1;
        }
    }
    for(int i=n-2;i>=0;i--){
        for(int j=n-1;j>=i;j--){
            if(lis2[i]<=lis2[j]+1 && arr[i]>arr[j])
                lis2[i]=lis2[j] + 1;
        }
    }
    int max= lis[0] + lis2[0] -1;
    for(int i=1;i<n;i++){
        if(lis[i] + lis2[i]-1>max)
            max=lis[i] + lis[2] - 1;
    }
    cout <<max<<endl;
    return 0;
}

#include <iostream>

using namespace std;
int arr[10][10],r,c;

int max_sum(int n,int m)
{
    if(n==r-1&&m==c-1)
        return arr[n][m];
    else if(n==r+1||m==c+1)
        return -1000000;
    int rr=max_sum(n+1,m);
    int ll=max_sum(n,m+1);
return arr[n][m]+max(rr,ll);
}
int main()
{
    cin>>r>>c;
    for(int i=0; i<r; i++)
        for(int m=0; m<c; m++)
        {
            cin>>arr[i][m];
        }
    cout<<max_sum(0,0);
    return 0;
}

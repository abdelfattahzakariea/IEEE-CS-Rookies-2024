#include <iostream>
using namespace std;

void arr(int n,int x,int y)
{
    int ar[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>ar[i][j];
    for(int i=0; i<n; i++)
        swap(ar[x-1][i],ar[y-1][i]);
    for(int i=0; i<n; i++)
        swap(ar[i][x-1],ar[i][y-1]);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<ar[i][j]<<" ";
        cout<<endl;
    }
}

int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    arr(n,x,y);
    return 0;
}

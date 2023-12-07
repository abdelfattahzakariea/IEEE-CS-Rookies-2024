#include <iostream>

using namespace std;
void shift_num(int n,int x)
{
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    if(x==n||x%n==0)
    {
        for(int i=0; i<n; i++)
            cout<<arr[i]<<" ";
    }
    else
    {
        for(int j=0; j<x%n; j++)
            for(int i=n-1; i>0; i--)
                swap(arr[i],arr[i-1]);
        for(int i=0; i<n; i++)
            cout<<arr[i]<<" ";
    }
}
int main()
{
    int n,x;
    cin>>n>>x;
    shift_num(n,x);
    return 0;
}

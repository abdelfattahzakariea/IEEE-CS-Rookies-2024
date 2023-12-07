#include <iostream>

using namespace std;

int arr(int n)
{
    int A[n],B[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    for(int i=0;i<n;i++)
        cin>>B[i];
    for(int i=0;i<n;i++)
        cout<<B[i]<<" ";
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
}
int main()
{
    int N;
    cin>>N;
    arr(N);
    return 0;
}

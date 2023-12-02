#include <iostream>
using namespace std;
const long long A=1e5;
long long arr[A];
int main()
{
    int a,larrge=1e9,samlll=0,cnt1=0,cnt=0;
    cin>>a;
    for (int i=0; i<a ; i++ )
        cin>>arr[i];
    for (int i=0; i<a ; i++ )
    {
        if(larrge>=arr[i])
        {
            larrge=arr[i];
            cnt1=i;
        }
    }
    for (int i=0; i<a ; i++ )
    {
        if(samlll<=arr[i])
        {
            samlll=arr[i];
            cnt=i;
        }

    }

    swap(arr[cnt1],arr[cnt]);
    for (int i=0; i<a ; i++ )
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

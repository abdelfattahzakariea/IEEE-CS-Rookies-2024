#include <iostream>
using namespace std;
int getnum(int n)
{
    for(int i=1;i<n;i++)
    {

        cout<<i<<" ";
    }
}

int main()
{
int n;
cin>>n;
getnum(n);
cout<<n;
    return 0;
}

#include <iostream>
using namespace std;
long long fap(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return fap(n-1)+fap(n-2);
}

int main()
{
int n;
cin>>n;
int res=fap(n);
 cout<<res;

    return 0;
}

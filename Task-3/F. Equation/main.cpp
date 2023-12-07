#include <iostream>
#include <cmath>
using namespace std;
long long equ(int x,int n)
{ long long int sum;
    for(int i=2;i<=n;i+=2)
        sum+=pow(x,i);
return sum;
}

int main()
{
int x,n;
cin>>x>>n;
cout<<equ(x,n);
    return 0;
}

#include <iostream>

using namespace std;
long long fact(long long n)//5
{
    if(n==2)
        return n;
    else if(n==0)
        return 1;
    return n*fact(n-1);//5*4
}
int main()
{
    int n,r;
    cin>>n>>r;
    long long ncr=fact(n)/(fact(r)*fact(n-r));
    long long npr=fact(n)/fact(n-r);
    cout<<ncr<<" "<<npr;

    return 0;
}

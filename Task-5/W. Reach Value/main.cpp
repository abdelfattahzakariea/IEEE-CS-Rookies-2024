#include <iostream>

using namespace std;
long long nn;
bool reach(long long n)
{
    if(nn<n)
        return false;
    else if(nn==n)
        return true;
    else
    {
        return reach(n*10)||reach(n*20);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>nn;

        if(reach(1)==true)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }
    return 0;
}

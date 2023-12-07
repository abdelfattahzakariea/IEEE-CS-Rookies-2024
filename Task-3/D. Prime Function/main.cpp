#include <iostream>
#include <cmath>

using namespace std;

bool prime_num(int n)
{
    bool f=true;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0&&n!=2)
            f=false;
    }
    if(f)
        return true;
    else
        return false;
}

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        if(n==1)
            cout<<"NO";
        else
        {
            if(prime_num(n))
                cout<<"YES";
            else
                cout<<"NO";
        }
        t--;
        cout<<endl;
    }
    return 0;
}

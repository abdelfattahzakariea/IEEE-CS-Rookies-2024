#include <iostream>

using namespace std;

int main()
{
    long long a,b,q;
    cin>>a>>b>>q;
    int temp=q%3;
    if(temp==1)
        cout<<a;
    else if(temp==2)
        cout<<b;
    else
        cout <<(a^b)<< endl;
    return 0;
}

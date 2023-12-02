#include <iostream>
using namespace std;

int main()
{

    int a,b,loc=-1;
    string s;
    cin>>a>>b;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='-')
        {
            loc=i;
        }
    }
    if(loc==a && s.size()-(loc+1)==b)
        cout<<"Yes";
    else
        cout<<"No";

}

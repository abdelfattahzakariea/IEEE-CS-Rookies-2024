#include <iostream>

using namespace std;

int main()
{
    int n,maxx=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s[i+1])
            maxx++;
    }
    cout<<maxx;
    return 0;
}

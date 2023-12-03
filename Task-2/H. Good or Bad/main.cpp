#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            if((s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0'||s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='1'))
            {
                cout<<"Good\n";
                break;
            }
            if(i==s.size()-1)
                cout<<"Bad\n";
        }
}
return 0;
}
//||s[i]==1&&s[i+1]==0&&s[i+2]==1

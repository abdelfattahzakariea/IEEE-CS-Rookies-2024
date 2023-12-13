#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,x,a,i,rem;
    cin>>t;
    if(t==1)
    {
        string n;
        cin>>n>>x;
        long long total=0,p=0;
        for(i=n.size()-1 ; i>=0 ; i--)
        {
            if(n[i]>='A' && n[i]<='Z')
            {
                a=n[i]-55;
            }
            else
            {
                a=n[i]-48;
            }
            total+=a*pow(x,p);
            p++;
        }
        cout<<total<<endl;
        return 0;
    }
    else
    {
        long long n;
        cin>>n>>x;
        vector<char>v;
        char c;
        while(n!=0)
        {
            rem=n%x;
            n=(n-rem)/x;
            if(rem>=10)
            {
                c=(rem-10)+65;
                v.push_back(c);
            }
            else
            {
                c=rem+48;
                v.push_back(c);
            }
        }
        for(int i=v.size()-1 ; i>=0 ; i--)
        {
            cout<<v[i];
        }
    }
    return 0;
}

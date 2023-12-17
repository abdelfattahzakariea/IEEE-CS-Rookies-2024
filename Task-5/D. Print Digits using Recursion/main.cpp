#include<bits/stdc++.h>
using namespace std;
int i=0;
long long num(string n)
{
    int l=n.size();
    if(i==l)
        return 0;
    cout<<n[i++]<<" ";
    num(n);

}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string n;
        cin>>n;
        //string s=to_string(n);
        //reverse(s.begin(),s.end());
      //  n=stoi(s);
        num(n);
        cout<<endl;
    i=0;

    }
    return 0;
}

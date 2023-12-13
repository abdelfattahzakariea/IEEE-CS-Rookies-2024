#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,sum,mul,m;
    cin>>s;
    mul=s+"0000";
    int l=s.size(),count=0,rem=0,x,x1,r,i,k;
    for(i=l-1 ; i>=0 ; i--)
    {
        x=s[i]-'0';
        x+=rem;
        if(count!=4)
        {
            x+=9;
            if(x>=9)
            {
                r=x%10;
                rem=x/10;
                sum+=r+'0';
            }
            else
            {
                sum+=x+'0';
                rem=0;
            }
            count++;
        }
        else
        {
            if(x>=9)
            {
                r=x%10;
                rem=x/10;
                sum+=r+'0';
            }
            else
            {
                sum+=x+'0';
                rem=0;
            }
        }
    }
    if(count<4)
    {
        for(i=count ; i<4 ; i++)
        {
            x=rem+9;
            if(x>=9)
            {
                sum+=(x%10)+'0';
                rem=x/10;
            }
        }
    }
    if(rem!=0) sum+=rem+'0';
    reverse(sum.begin(),sum.end());
    cout<<sum<<endl;
    x1=s.size()-1;
    rem=0;
    for(i=mul.size()-1 ; i>=0 ; i--)
    {
        x=mul[i]-'0';
        if(x1!=-1)
        {
            k=s[x1]-'0'+rem;
            x1--;
            if(x<k)
            {
                x+=10;
                m+=(x-k)+'0';
                rem=1;
            }
            else
            {
                if(i==0 && (x-k)==0) continue;
                m+=(x-k)+'0';
                rem=0;
            }
        }
        else
        {
            if(x>=rem)
            {
                if(i==0 && (x-rem)==0) continue;
                m+=(x-rem)+'0';
                rem=0;
            }
            else
            {
                x+=10;
                m+=(x-rem)+'0';
                rem=1;
            }
        }
    }
    reverse(m.begin(),m.end());
    cout<<m<<endl;
    return 0;
}

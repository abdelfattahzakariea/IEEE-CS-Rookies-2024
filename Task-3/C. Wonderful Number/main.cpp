#include <iostream>
#include <string>
using namespace std;
bool odd(int n)
{
    if(n%2==0)
        return false;
    return true;
}
bool palindrom(int n)
{
    string s;
    int i=0;
    bool result;
    if(odd(n)==true)
    {
        while(n>0)
        {
            if(n%2==0)
                s+="0";
            else
                s+="1";
            n=n/2;
            i++;

        }//1100110110101
        for(int j=0; j<i/2; j++)
        {
            if(s[j]==s[--i])
            {
                result=true;
            }
            else
            {

                result=false;
                break;
            }
        }
        return result;
    }
    else
    {
        result=false;
        return result;
    }
}

int main()
{

    int x;
    cin>>x;
    if(palindrom(x)==true)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}

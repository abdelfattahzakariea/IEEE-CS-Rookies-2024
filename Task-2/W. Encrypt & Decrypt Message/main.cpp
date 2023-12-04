#include <iostream>

using namespace std;

int main()
{
    string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/",
           Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789",s;
    int t;
    cin>>t>>s;
    if(t==1)
    {
        for(int j=0; j<s.size(); j++)
        {
            for(int i=0; i<Key.size(); i++)
            {
                if(s[j]==Original[i])
                {
                    cout<<Key[i];
                    break;
                }
            }
        }
    }
    else
    {
        for(int j=0; j<s.size(); j++)
        {
            for(int i=0; i<Key.size(); i++)
            {
                if(s[j]==Key[i])
                {
                    cout<<Original[i];
                    break;
                }
            }
        }
    }
    return 0;
}

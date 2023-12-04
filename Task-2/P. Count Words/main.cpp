#include <iostream>
using namespace std;

int main()
{
    int j=1;
    string s;
    getline(cin,s);

    for(int i=1; i<s.size(); i++)
    {
        if(!(s[i]>='A'&&s[i]<='z')&&(s[i+1]>='A'&&s[i+1]<='z'))
           j++;
    }
    cout<<j;

    return 0;
}
      //  if((s[i]>='A'&&s[i]<='z'))

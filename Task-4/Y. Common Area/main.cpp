#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t,c;
    cin>>t;
    c=1;
    while(c<=t)
    {
        int num;
        cin>>num;
        long long x1,y1,x2,y2,mx1,my1,mx2,my2;
        cin>>x1>>y1>>x2>>y2;
        mx1=x1;
        my1=y1;
        mx2=x2;
        my2=y2;
        while(--num)
        {
            cin>>x1>>y1>>x2>>y2;

            mx1=max(mx1,x1);
            my1=max(my1,y1);
            mx2=min(mx2,x2);
            my2=min(my2,y2);
        }
        if(mx2>mx1&&my2>my1)
        {
            cout<<"Case #"<<c<<": "<<(mx2-mx1)*(my2-my1)<<endl;
        }
        else
            cout<<"Case #"<<c<<": "<<0<<endl;

        c++;
    }
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t,N;
    cin>>t;

    while(t>0)
    {
        t--;
        cin>>N;//==4
        int arr[N];// == 3
        for(int i=0; i<N; i++)
            cin>>arr[i];

        for(int s=0;s<N;s++)
        {

            for(int e=s;e<N;e++)
            {
                int maxx=-1e5;
                for(int c=s;c<=e;c++)
                {
                   if(arr[c]>maxx)
                   {
                       maxx=arr[c];
                   }
                }
            cout<<maxx<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t,N,sum;
    cin>>t;

    while(t>0)
    {
        int mint=10000000;
        t--;
        cin>>N;//==4
        int arr[N-1];// == 3
        for(int i=0; i<N; i++)
        {
            cin>>arr[i];
        }
        int ii=1,j;
        while(ii<=N)
        {
            j=ii+1;//2
            while(j<=N)
            {
                sum=arr[ii-1]+arr[j-1]+j-ii;
                mint=min(mint,sum);
                j++;
            }
            ii++;
        }
        cout<<mint<<endl;
    }
    return 0;
}

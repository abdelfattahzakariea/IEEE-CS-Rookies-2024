#include <iostream>

using namespace std;
int arrv[50],arrw[1000],i=0;
long long value(int v,int w)
{
    if(w==0||v==0)
        return 0;
    if(arrw[v-1]>w)
    {
        return value(v-1,w);
    }
    else
    {
        return max(arrv[v-1]+value(v-1,w-arrw[v-1]),value(v-1,w));
    }
}

int main()
{

    int n,w;
    cin>>n>>w;
    for(int i=0; i<n; i++)
        cin>>arrw[i]>>arrv[i];//w  v

    cout<<value(n,w);


    return 0;
}

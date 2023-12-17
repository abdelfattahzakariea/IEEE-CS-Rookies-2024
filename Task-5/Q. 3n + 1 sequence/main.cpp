#include<bits/stdc++.h>
using namespace std;
int l=1;
int lengt_of_num(int n)
{
    if(n==1)
        return l;
    else if(n%2!=0)
    {
        n=3*n+1;
        l++;
    lengt_of_num(n);
    }
    else
    {
        n/=2;
        l++;
    lengt_of_num(n);

    }

}

int main()
{
    int n;
    cin>>n;

    cout <<lengt_of_num(n)<< endl;
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

    long long arr[100];
    long double sum=0;
    int i=0;

long long summ(int n)
{
if(i==n)
    return sum;
sum+=arr[i++];
summ(n);


}

int main()
{
        int n;
        cin>>n;
        arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<fixed<<setprecision(6);

    long double average=summ(n)/n;
cout<<average;

    return 0;
}

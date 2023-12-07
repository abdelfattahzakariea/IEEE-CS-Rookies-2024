#include <iostream>
#include<algorithm>
#include<cmath>

using namespace std;
bool palindrom(int n)
{
    int temp=n,res=0;
    while(n)
    {
        res=res*10+n%10;
        n/=10;
    }
    if(res==temp)
        return true;
    else
        return false;
}
bool prime(int n)
{
    if(n==2||n==3)
        return true;
    else if(n==1)
        return false;
    else
    {
        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
                return false;
                break;
            }
            else
                continue;
        }
        return true;
    }
}

int max_num_devisor(int n)
{
    int cc=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
            cc++;
        else
            continue;
    }
    return cc;
}
int main()
{
    int maxx=0,n,countpalindrome=0,countprime=0,max_divisor;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    cout<<"The maximum number : "<<arr[n-1]<<endl;
    cout<<"The minimum number : "<<arr[0]<<endl;
    for(int i=0; i<n; i++)
    {
        if(prime(arr[i]))
            countprime++;
        else
            continue;
    }
    cout<<"The number of prime numbers : "<<countprime<<endl;

    for(int i=0; i<n; i++)
    {
        if(palindrom(arr[i]))
            countpalindrome++;
        else
            continue;
    }
    cout<<"The number of palindrome numbers : "<<countpalindrome<<endl;
    for(int i=0; i<n; i++)
    {
        if(maxx<=max_num_devisor(arr[i]))
        {
            maxx=max_num_devisor(arr[i]);
            max_divisor=arr[i];
        }
    }
    cout<<"The number that has the maximum number of divisors : "<<max_divisor;

    return 0;
}

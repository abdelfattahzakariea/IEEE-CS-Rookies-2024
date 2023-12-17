#include <iostream>

using namespace std;
    int temp=0;
int num(int n)
{
    cout<<++temp<<endl;
    if(temp==n)
        return 0;
    num(n);
}
int main()
{
    int n;
    cin>>n;
    num(n);
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n1,m1,n2,m2;
    cin>>n1>>m1;
    int arr[n1][m1];

    for(int i=0;i<n1;i++)
        for(int ii=0;ii<m1;ii++)
        {
            cin>>arr[i][ii];
        }
    cin>>n2>>m2;
    int arr2[n2][m2];
    for(int i=0;i<n2;i++)
        for(int ii=0;ii<m2;ii++)
        {
            cin>>arr2[i][ii];
        }
    int arr3[n1][m2];
    for(int i=0;i<n1;i++)
        for(int ii=0;ii<m2;ii++)
           arr3[i][ii]=0;
    for(int i=0;i<n1;i++)
        for(int ii=0;ii<m2;ii++)
            for(int m=0;m<n2;m++)
            {
                arr3[i][ii]+=arr[i][m]*arr2[m][ii];
            }
    for(int i=0;i<n1;i++){
        for(int ii=0;ii<m2;ii++)
            cout<<arr3[i][ii]<<" ";
    cout<<endl;
}


    return 0;
}

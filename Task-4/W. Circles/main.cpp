#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1,y1,x2,y2,x3,y3,x4,y4,rx1,ry1,rx2,ry2,rd,rd1,rd2,rr;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    rx1=(x1+x2)/2;
    ry1=(y1+y2)/2;
    rx2=(x3+x4)/2;
    ry2=(y3+y4)/2;
    rd=sqrt((pow((rx1-rx2),2)+pow((ry1-ry2),2)));//dt of r---r
    rd1=sqrt((pow((rx1-x1),2)+pow((ry1-y1),2)));//d1 of r1---x1
    rd2=sqrt((pow((rx2-x3),2)+pow((ry2-y3),2)));//d2 of r2---x2
    rr=rd1+rd2;
    //cout<<rd1<<endl<<rd2<<endl<<rd<<endl<<rr<<endl;
    if(rd>rr)
        cout<<"NO";
    else
        cout<<"YES";


    return 0;
}


#include<iostream>
using namespace std;
int DK(int n)
{
    int dv=n%10,ch=(n/10)%10,tr=n/100;
    if(dv+ch+tr==18&&(ch==(float)(tr+dv)/2))
        return 1;
    else 
        return 0;
}
void Xuat()
{
    for(int i=-999;i<=999;i++)
    {
        if(DK(i)==1)
            cout<<i<<"\t";
    }
}
int main()
{
    Xuat();
    
}

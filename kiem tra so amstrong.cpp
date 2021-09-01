#include<iostream>
#include<math.h>
using namespace std;
void NhapN(int &n)
{  
    cout<<"\nNhap n:";
    cin>>n;
}
void KTSoAS(int n)
{
    int s=0,dv,t=n;
    while(n>0){
        dv=n%10;
         s+=dv*dv*dv;
         n/=10;
        }
    if(s==t)
        cout<<"n la so amstrong!!!";
    else
    {
        cout<<"n khong phai so amstrong!!!";
    }
    
    
    
}
int main()
{
    int n;
    NhapN(n);
    KTSoAS(n);
}
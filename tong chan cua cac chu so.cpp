
#include<iostream>
using namespace std;
void NhapN(int &n)
{  
    cout<<"\nNhap n:";
    cin>>n;
}
int TongChan(int n)
{
    int dv,s=0;
    while(n>0)
    {
        dv=n%10;
        n/=10;
        if(dv%2==0)
            s+=dv;
    }
        return s;
}
int main()
{
    int n;
    NhapN(n);
    if(TongChan(n)==0)
        cout<<"\nN khong co chu so chan nao!!!"<<endl;
    else
    {
        cout<<"\nTong cac chu so chan cua n la: "<<TongChan(n)<<endl;
    }
    
}

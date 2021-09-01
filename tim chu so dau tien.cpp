
#include<iostream>
using namespace std;
void NhapN(int &n)
{  
    cout<<"\nNhap n:";
    cin>>n;
}
void InChuSoDauTien(int n)
{
    int dv;
    while(n>0){
        dv=n%10;
         n/=10;
        }
    cout<<" chu so dau tien:"<<dv;
    
}
int main()
{
    int n;
    NhapN(n);
    InChuSoDauTien(n);
}

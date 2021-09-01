// Kiểm tra số nguyên 4 byte có dạng 2^k hay không ?
#include<iostream>
#include<math.h>
#define MAX 100
using namespace std;
void NhapN(int &n)
{   do{
    cout<<"\nNhap n(1<=n<=100):";
    cin>>n;
    if(n<1||n>MAX)
        cout<<"\nNhap n khong hop le !!!yeu cau nhap lai!!!";
}while(n<1||n>MAX);
    
}
void KT(int n)
{
    float a=log(n)/log(2);
    if(a=floor(a))
         cout<<"n co dang 2^k!!!"<<endl;
    else
    {
        cout<<"n khong co dang 2^k!!!"<<endl;
    }
}
int main()
{
    int n;
    NhapN(n);
    KT(n);
       
    
}

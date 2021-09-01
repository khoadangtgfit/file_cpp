// Tính S(n)=1/(1*2)+1/(2*3)+...+1/(n*(n+1)) 
#include<iostream>
#define MAX 100
using namespace std;
void NhapN(int &n)
{        
    cout<<"\nNhap n(1<=n<=100):";
}
float Tong(int n)
{
    float s=0;
    for(int i=1;i<=n;i++)
    {
        s+=1.0/(n*(n+1));
    }
    return s;
}
int main()
{
    int n;
    cout<<"\nTinh Tong cua S(n)=1/(1*2)+1/(2*3)+...+1/(n*(n+1):"<<endl;
    NhapN(n);
    cout<<"Tong= "<<Tong(n);
}

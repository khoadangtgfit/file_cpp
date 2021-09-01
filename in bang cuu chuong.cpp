
#include<iostream>
#define MAX 100
using namespace std;
void InBangCuuChuong()
{
    for(int i=1;i<=10;i++){
        for(int j=1;j<=5;j++){
            cout<<j<<" X "<<i<<" = "<<i*j;
             cout<<"\t";
            }
       cout<<endl;
    }
    cout<<endl<<endl;
    for(int i=1;i<=10;i++){
        for(int j=6;j<=10;j++){
            cout<<j<<" X "<<i<<" = "<<i*j;
             cout<<"\t";
            }
       cout<<endl;
    }
}
int main()
{
    InBangCuuChuong();
       
    
}


#include<iostream>
using namespace std;
void PhuongAn()
{
    for(int z=0;z<=40;z++)
    {
        for(int y=0;y<=100;y++)
        {
            for(int x=0;x<=200;x++)
                if(x+2*y+5*z==200)
                    cout<<x<<" "<<y<<" "<<z<<endl;
        }
    }
    
}
int main()
{
   PhuongAn();
    
}

#include <iostream>
using namespace std;
int main()
{
    long a,b,i=1,s=0;
    cout<<"Enter the aimal to be converted:";
    cin>>a;
    do
    {
        b=a%2;
        s=s + (i*b);
        a=a/2;
        i=i*10;
    }while(a>0);
    cout<<"The binary of the given number is:"<<s<<endl;
    // cin.get();
    // cin.get();
 
    return 0;
}
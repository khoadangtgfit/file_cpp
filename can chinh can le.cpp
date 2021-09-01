#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<setw(5)<<left<<"ID";
    cout<<setw(30)<<left<<"Name";
    cout<<setw(20)<<right<<"Address"<<endl;
    cout<<setfill('-');
    cout<<setw(55)<<"-"<<endl;
    cout<<setfill(' ');
    cout<<setw(5)<<left<<"1";
    cout<<setw(30)<<left<<"Dang Phuoc Khoa";
    cout<<setw(20)<<right<<"Thuong Cu"<<endl;
    cout<<setfill(' ');
    cout<<setw(5)<<left<<"2";
    cout<<setw(30)<<left<<"Cu em";
    cout<<setw(20)<<right<<"My Tan Hotel"<<endl;
    cout<<setw(5)<<left<<"3";
    cout<<setw(30)<<left<<"Khoa ruou";
    cout<<setw(20)<<right<<"Ai Tu"<<endl;
}
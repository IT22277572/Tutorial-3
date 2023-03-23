#include<iostream>
#include<iomanip>
using namespace std;
void print(int len,int width);
void input(int &len,int &width);
int main()
{
 int len=10,width=5;
  input(len,width);
  print(len,width);
  print(len,width);
  return 0;
}
//do not cahnge the print() function
void print(int len,int width)
{
  cout<<"length:"<<len<<",width:"<<width<<endl;
}
void input(int &len,int &width)
{
  cout<<" Enter length:";
  cin>>len;
  cout<<" Enter the wodth:";
  cin>>width;
}
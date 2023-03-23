#include<iostream>
#include<iomanip>
using namespace std;
int volume(int height,int width,int length);
int main()
{
  int box1Height,box1Width,box1length;
  int box2Height,box2Width,box2length;
 

  cout<<"Enter the Box1 Hight:";
  cin>>box1Height;
  cout<<"Enter the Box1 Width:";
  cin>>box1Width;
  cout<<"Enter the Box1 Length:";
  cin>>box1length;

  cout<<"Enter the Box2 Hight:";
  cin>>box2Height;
  cout<<"Enter the Box2  Width:";
  cin>>box2Width;
  cout<<"Enter the Box2 Length:";
  cin>>box2length; 
   int totalVolume=volume(box1Height,box1Width,box1length)+volume(box2Height,box2Width,box2length);
  cout<<"Total volumes  of boxes are:"<<totalVolume;
}
int volume(int height,int width,int length)
{
   return height*width*length;
}
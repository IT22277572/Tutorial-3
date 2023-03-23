#include<iostream>
#include<iomanip>
using namespace std;
struct box
  { 
    int length;
    int width;
    int height;
  };
int volume(int height,int width,int length);
int main()
{
  struct box box1,box2;
cout<<"Enter the boxlength:";
cin>>box1.length;
cout<<"Enter the boxwidth:";
cin>>box1.width;
cout<<"Enter the boxheight";
cin>>box1.height;

cout<<"Enter the boxlength:";
cin>>box2.length;
cout<<"Enter the boxwidth:";
cin>>box2.width;
cout<<"Enter the boxheight";
cin>>box2.height; 

  int totalvolume=volume(box1.length,box1.width,box1.height)+volume(box2.length,box2.width,box2.height);
   cout<<"Total volume of boxes:"<<totalvolume<<endl;
}
int volume(int height,int width,int length)
{
   return height*width*length;
}
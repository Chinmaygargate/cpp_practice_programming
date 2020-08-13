#include<iostream>
using namespace std;
int volume(int);
double volume(double,int);
long volume(long int,int,int);
int main()
{
cout<<"volume of cube = ";
cout<<volume(10)<<"\n";
cout<<"volume of cylinder = ";
cout<<volume(2.5,8)<<"\n";
cout<<"volume of cuboid = ";
cout<<volume(100,75,15)<<"\n";
 return 0;
}
//function definition
int volume(int side)
{
  return (side*side*side);
}                                                //function for volume of cube


double volume(double radius,int height)
{
 return(3.14*radius*radius*height);
}                           //function for volume of cylinder


long volume(long int length,int breadth,int height)
 {
      return(length*breadth*height);
 }              //function  for volume of cuboid


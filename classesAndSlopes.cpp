//This is a program that uses classes to 
//evaluate the slope of a line

#include <iostream>
#include <cmath>
#define PI 3.14159
#define EPS 0.00001
/*division by a number will only be attempted 
if its absolute value exceeds EPS*/

using namespace std;

class Point
{
  public:
  float x;
  float y;

  public:
  void setxy();
};

void Point:: setxy()
{
cout<<"Enter the coordinates of point: ";
cin>>x >>y;
cout<<"\n";
}

int main(){
float tanx, s;
Point A, B;

cout<<"For Point A ";
A.setxy();

cout<<"For point B ";
B.setxy();

if(fabs(B.x-A.y)>EPS)
{
tanx = (B.y-A.y)/(B.x-A.x);
s = atan(tanx);
s = 180/PI * s; //converts radians to degrees
}
else
{
s = 90.0; //slope is zero if x2 is very close to x1
}
cout<<"Slope of line AB is "<<s <<"Degrees"<<endl;
}

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
  private:
  float x;
  float y;

  public:
  void setxy();
  float getx();
  float gety();
};

void Point:: setxy()
{
cout<<"Enter the coordinates of point: ";
cin>>x >>y;
cout<<"\n";
}

float Point:: getx()
{
return x;
}

float Point:: gety()
{
return y;
}

int main(){
float tanx, s;
Point A, B;

cout<<"For Point A ";
A.setxy();

cout<<"For point B ";
B.setxy();

if(fabs(B.getx() - A.gety())>EPS)
{
tanx = (B.gety() - A.gety())/(B.getx() - A.getx());
s = atan(tanx);
s = 180/PI * s; //converts radians to degrees
}
else
{
s = 90.0; //slope is zero if x2 is very close to x1
}
cout<<"Slope of line AB is "<<s <<"Degrees"<<endl;
}

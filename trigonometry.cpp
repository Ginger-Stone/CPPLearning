//A program to find the Slope of a given line. 
//i.e find hypoteneuse and the angle at A.

#include <iostream>
#include <cmath>
#define pi 3.14159 
using namespace std;

int main(){
int x1,x2,y1,y2;
float hyp,angleA;

cout<<"A*\n"<<" * *\n"<<" *  *\n"<<" *   *\n"<<" *    *\n"<<"B*******C\n";
cout<<"Enter coordinates for 1st point(x1,y1): ";
cin>>x1 >>y1;
cout<<"\n";

cout<<"Enter coordinates for 2nd point(x2,y2): ";
cin>>x2 >>y2;
cout<<"\n";

int x=abs(x2-x1);
int y=abs(y2-y1);

hyp=pow(x,2)+pow(y,2);
hyp=sqrt(hyp);
 
cout<<"The hypoteneuse is "<<hyp;
//angle is in radians
float hypy=y/hyp;
angleA=asin(hypy);

cout<<"\nThe angle at A(in radians) is: " <<angleA;
//conversion from radians to degrees
angleA=(180/pi) * angleA;

cout<<"\nThe angle at A(in degrees) is: " <<angleA;
cout<<"\n";

return 0;
}


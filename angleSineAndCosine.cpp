//A program to evaluate the sine and cosine of an angle

#include <iostream>
#include <cmath>
#define pi 3.14159;
using namespace std;

int main(){
//variable declaration
int angle;
float x;
float sx,cx;

cout<<"Enter angle in degrees: ";
cin>>angle;
cout<<"\n";

x=180/pi;
x=x * angle;

sx=sin(x);
cx=cos(x);

cout<<"Sine of "<<angle <<" is " <<sx;
cout<<"\n";
cout<<"Cosine of "<<angle <<" is " <<cx;
cout<<"\n";
}


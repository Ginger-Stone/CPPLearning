#include <iostream>
#include <cmath>
#define pi 3.14159
using namespace std;

//variable declaration
float r,h,volume;

void userInput(){

 cout<<"Please Enter the Radius: " <<endl;
 cin>>r;
 cout<<"Please Enter the Height:  "<<endl;
 cin>>h;
}

int process(){

 r=pow(r,2);
 volume=pi * r * h;
 cout<<"\nThe Volume Of that cylinder is: " <<volume <<endl;
}

int main(){
 userInput();
 process();
}

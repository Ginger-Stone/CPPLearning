#include <iostream>
using namespace std;

//variable declaration
int a,b,d,sum;

int c();
int main(){
d = c();
cout<<d;
}

int c(){
 cout<<"Please Enter Two Numbers: ";
 cin>>a >>b;
 sum=a+b;
 cout<<"\nThe Sum of "<<a <<" + " <<b <<" is " <<sum<<endl;

return 0;
}



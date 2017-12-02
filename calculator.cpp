//Simple Calculator by Doreen Chemweno aka Ginger-Stone
/****************
Our calculator will be having two sections:
a) Simple Math; incorporating addition, subtraction
,multiplication and division
b) Advanced Math; incorporating cosine, sine, tan, polar, 
rectangular, factorial and logarithms
****************/
#include <iostream>
#include <cmath>
using namespace std;

//variable declaration
char x;
int a,b;

//Addition fuction
int Add(){
int sum;
sum = a+b;
cout<<"\nThe sum of " <<a <<" + " <<b <<" is " <<sum <<"\n";
}

//Subtraction function
int Subtract(){
int subtract;
subtract = a-b;
cout<<"\nThe difference " <<a <<" - " <<b <<" is " <<subtract <<"\n";
subtract = b-a;
cout<<"\nThe difference " <<b <<" - " <<a <<" is " <<subtract <<"\n";
}

//Product function
int Product(){
int product;
product = a * b;
cout<<"\nThe product of " <<a <<" * " <<b <<" is " <<product <<"\n";
}

//Quotient function
int Quotient(){
int quotient;
quotient = a / b;
cout<<"\nThe quotient of " <<a <<" / " <<b <<" is " <<quotient <<"\n";
quotient = b / a;
cout<<"\nThe quotient of " <<b <<" / " <<a <<" is " <<quotient <<"\n";
}

//Quotient function
int Modulus(){
int modulus;
modulus = a % b;
cout<<"\nThe modulus of " <<a <<" % " <<b <<" is " <<modulus <<"\n";
modulus = b / a;
cout<<"\nThe modulus of " <<b <<" % " <<a <<" is " <<modulus <<"\n";
}

int simpleMath(){
//local variables

cout<<"Select the operation: \n";
cout<<"\t1. Add\n"
<<"\t2. Subtract\n"
<<"\t3. product\n"
<<"\t4. Quotient\n"
<<"\t5. Modulus\n";
cin>>x;

if(x!='1' || x!='2'|| x!='3' || x!='4' || x!='5'){
cout<<"Please select from the given options. e.g Select 1 for Addition.\n\n";
cout<<"Select the operation: \n";
cout<<"\t1. Add\n"
<<"\t2. Subtract\n"
<<"\t3. product\n"
<<"\t4. Quotient\n"
<<"\t5. Modulus\n";
cin>>x;
}

cout<<"\n Enter 2 numbers: ";
cin>>a >>b;

if(x=='1'){
Add();
}
else if(x=='2'){
Subtract();
}
else if(x=='3'){
Product();
}
else if(x=='4'){
Quotient();
}
else if(x=='5'){
Modulus();
}

}

//main function
int main(){
simpleMath();
}





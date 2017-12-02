/*The Ternary Operator in C++ allow three way 
transfer of control.
The syntax of the statement is:
       x = (cond) ? exp1 : exp2 , where if 
condition is true x is assigned exp1 else 
x is assigned exp2 */
//Program to illustrate typical use of ternary 
//operator
#include <iostream>

using namespace std;

int main()
{
int k;
float x;

cout<<"Enter the value of k: ";
cin>>k;
cout<<"\n";

x=(k>10)? k+3:k+1; //trrnary operator
cout<<"x = " <<x <<endl;
}

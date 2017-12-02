/*A program that reads students marks and
and displays his or her results*/

#include <iostream>
#define AND &&

using namespace std;

int main()
{
int marks,div;
char results;

cout<<"Please Enter the student Marks: ";
cin>>marks;
cout<<"\n";

if(marks>70)
{
div = 1;
cout<<"You attained the First division."<<endl;
cout<<"Division = "<<div <<endl;
} 
else if(marks<70 AND marks>=50)
{
div = 2;
cout<<"You attained the second division."<<endl;
cout<<"Division = "<<div <<endl;
}
else if(marks<50 AND marks>=30)
{
results = 'P';
cout<<"You passed." <<endl;
cout<<"Results = "<<results <<endl;
}
else
{
results = 'F';
cout<<"You Failed."<<endl;
cout<<"Results = " <<results <<endl; 
}
}

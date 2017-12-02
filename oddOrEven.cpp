#include <iostream>
using namespace std;

int main(){
int x;

cout<<"Enter an Integer No.: ";
cin>>x;

if(x&1)
cout<<"\n" <<x <<" is an odd number." <<endl;
else
cout<<"\n" <<x <<" is an even number."<<endl;

return 0;
}

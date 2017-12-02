//A program to find end period equities for an investment

#include <iostream>
#include <cmath>

using namespace std;

class FinancedPurchase
{
  private:
  float principal;
  int periods;
  float rate;
  float instalment;

  public:
  void userInput()
    {
      cout<<"\nPurchase Amount: ";
      cin>>principal;
      cout<<"\nNo of instalments: ";
      cin>>periods;
      cout<<"\nRate of interest: ";
      cin>>rate;
    }
  void getInstalment()
    {
      float crf;
      float rp1 = rate+1;
      crf =rate * pow(rp1,periods);
      crf =crf/(pow(rp1,periods)-1);
      instalment =crf * principal;
      cout<<"\nInstalment = " <<instalment <<endl;
    }
};

int main()
{
  FinancedPurchase machine;
  machine.userInput();
  machine.getInstalment();

return 0;
}

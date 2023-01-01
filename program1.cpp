#include <iostream>
using namespace std;
class complex
{
  float real;
  float imag;
  public:
  complex()
  {
    real=0;
    imag=0;
  }
    complex operator +(complex);
    complex operator *(complex);
    
    friend istream &operator >>(istream &input,complex &t)
    {
      cout<<"Enter the real part";
      input>>t.real;
      cout<<"Enter the imaginary part";
      input>>t.imag;
      return input;
    }
    friend ostream &operator <<(ostream &output,complex &t)
    {
     output<<t.real<<"+"<<t.imag<<"i\n";
      return output;
    }
    
};
   complex complex::operator +(complex c)
   {
     complex temp;
     temp.real=real+c.real;
     temp.imag=imag+c.imag;
     return temp;
   }
   
   complex complex::operator *(complex c)
   {
     complex temp2;
     temp2.real=(real*c.real)-(imag*c.imag);
     temp2.imag=(imag*c.real)+(real*c.imag);
     return temp2;
   }
  
  int main()
  {
   complex c1,c2,c3,c4;
   cout<<"Default constructor value=\n";
   cout<<c1;
   cout<<"\nEnter the 1st number\n";
   cin>>c1;
   cout<<"\nEnter the 2nd number\n";
   cin>>c2;
   c3=c1+c2;
   c4=c1*c2;
   cout<<"\nThe first number is ";
   cout<<c1;
   cout<<"\nThe second number is ";
   cout<<c2;
   cout<<"\nThe addition is ";
   cout<<c3;
   cout<<"\nThe multiplication is "; 
   cout<<c4;
   return 0;
 }

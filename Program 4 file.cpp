#include <iostream>
#include <fstream>
using namespace std;
class employee 
  { 
   char name[20]; 
   int emp_id;
   float salary;
   public:
   void accept()
   {
    cin>>name;
    cin>>emp_id;
    cin>>salary;
   }
   void display()
   {
     cout<<"\n"<<name<<"\t"<<emp_id<<"\t"<<salary;
   }
  };
int main()
{
  employee o[5];
  fstream f;
  int i,n;
  f.open("input.txt",ios::out);
  cout<<"\n How many employee information wanted to store:";
  cin>>n;
  cout<<"\n Enter information of employees (Enter name, emp_id, salary)";
  for(i=1;i<=n;i++)
  {
    cout<<"\n Enter information of  employee "<<i<<" ";
    o[i].accept(); 
    f.write((char*)&o[i],sizeof(o[i])); 
  }
  f.close();
  f.open("input.txt", ios::in);
  cout<<"\n Information of employee is as follows";
  for(i=1;i<=n;i++)
  {
    f.read((char*)&o[i],sizeof(o[i])); 
    o[i].display();
  }
   f.close();
   return 0;
 }

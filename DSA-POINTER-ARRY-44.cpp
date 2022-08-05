#include <iostream>
using namespace std;
int main()
{
  int num1,num2;
  int sum=0;
  int sub=0;
  int multi=0;
  int *ptr1;
  int *ptr2;
  cout<<"Enter the first number: ";
  cin>>num1;
  cout<<"Enter the second number: ";
  cin>>num2;
  ptr1=&num1;
  ptr2=&num2;
  (*ptr1)++;
  (*ptr2)++;
  cout<<"After increment: "<<ptr1<<endl;
  cout<<ptr2<<endl;
  
  sum=*ptr1+*ptr2;
  sub=*ptr1-*ptr2;
  multi=*ptr1**ptr2;
  
  cout<<"This is sum: "<<sum<<endl<<sub<<endl<<multi<<endl;
  
  (*ptr1)--;
  (*ptr2)--;
  
  sub=(*ptr1+*ptr2);
  
  cout<<sub<<endl;
  
return 0;
}

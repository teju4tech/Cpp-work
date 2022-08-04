#include <iostream>
using namespace std;

int main()
{
  string s;
  
  cout<<"Enter a string: "<<endl;
  
  getline(cin,s);
  
  cout<<"You have entered: "<<endl;
  cout<<s;
  
  s.push_back('N');
  cout<<"Affter using pop  back"<<s<<endl;
  
  s.pop_back();
  cout<<"After using pop back"<<s<<endl;
}

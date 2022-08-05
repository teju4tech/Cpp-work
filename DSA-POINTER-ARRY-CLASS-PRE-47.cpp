//OBJECT PRECRTICE
#include <iostream>
using namespace std;
class Lab 
{   public:
	void display()
	{
	
	cout<<"I'm the student of mit...";
	cout<<this;
	
   }
};


int main()
{
	Lab student;
	student.display();
	return 0;
}

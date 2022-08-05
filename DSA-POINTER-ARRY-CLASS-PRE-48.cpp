//class precttice
#include <iostream>
using namespace std;

class Home
{
	public:
		void display()
		{   
		    int a;
			cout<<"Enter the number(2-5):";
			cin>>a;
			if(a==3)
			{
				cout<<"You have click on : 3"<<endl;
			}
			else
			{
				cout<<"You have click on : 4 "<<endl;
			}
			
		}
};

int main()
{
	Home me;
	me.display();
	return 0;
}

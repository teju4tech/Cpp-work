#include <iostream>
using namespace std;

int main()
{
   int *ptr;
   int arr[]={5,4,6,1,2,3,8};
   
   ptr=arr;
   
   for(int i=0;i<7;i++)
   {
   	cout<<*ptr<<endl;
   	ptr++;
	}	
return 0;
}

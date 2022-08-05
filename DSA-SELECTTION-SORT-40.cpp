#include <iostream>
using namespace std;

int main()
{
  int i;
  int j;
  int num;
  int p;
  int temp;
  int min;
  int arr[20];
  cout<<"Enter the elements of arry: ";
  cin>>num;
  
  cout<<"\n Enter the element: \n";
  
  for(int i=0;i<num;i++)
  {
  	cin>>arr[i];
  }
  
  //selection sorting 
  for(int i=0;i<num-1;i++)
  {
  	min=arr[i];
  	p=i;
  	for(int j=0;j<num;j++)
  	{
  	  if(min>arr[j])
		{
		  min=arr[j];
		  p=j;	
		}	
	}
	 
	temp=arr[i];
	arr[i]=arr[p];
	arr[p]=temp;
  }
  
  cout<<"Sorted arry are this: \n";
  for(int i=0;i<num;i++)
  {
  	cout<<arr[i]<<" ";
  }
return 0;
}

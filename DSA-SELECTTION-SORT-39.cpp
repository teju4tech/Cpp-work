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
  int arr[10];
  cout<<"Enter the number of elements: ";
  cin>>num;
  
  cout<<"\n Enter the elements: \n";
  
  for(int i=0;i<num;i++)
  {
  	cin>>arr[i];
  }
  //this is selection sort with process
  for(int i=0;i<num-1;i++)
    {
    	min=arr[i];
    	p=i;
    	for(j=i+1;j<num;j++)
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
	
	cout<<"\n Sorted elements are : \n";
	for(i=0;i<num;i++)
	{
		cout<<arr[i]<<" ";
	}
  
return 0;
}

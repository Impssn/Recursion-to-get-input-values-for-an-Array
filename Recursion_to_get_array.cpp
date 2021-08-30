#include<iostream>                           
using namespace std;
void input(int i,int n,int arr[])
{
	if(i<n)
	{
		cout<<"\nPlease enter value at array index "<<i <<" : \n";
		cin>>arr[i];
		input(i+1,n,arr);
	}
	if(i == n-1)
	  return;
}
int main()
{
	int i=0,n;
	cout<<"\n Enter no. of elements in the array: ";
	cin>>n;
	int arr[n];
	cout<<"\n    RECURSION TO GET INPUT FOR AN ARRAY    ";
	input(i,n,arr);
	cout<<"\n Array values are";
	for(int i=0;i<n;i++)
	{
		cout<<"\n"<<arr[i];
	}
	return 0;
}

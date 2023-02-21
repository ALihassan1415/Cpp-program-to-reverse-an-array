// Write a program to reverse an array...

#include<iostream>
using namespace std;
int main()
{
	int arr[5];
		cout<<"Enter values : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Value "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"Elements of array are : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<"\nReverse of array : "<<endl;
	for(int i=4;i>=0;i--)
	{
		cout<<arr[i]<<"\t";
	}
	return 0;
}
#include<iostream>
using namespace std;
template <typename t>
void bubblesort(t arr[],t n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				t temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
template<typename t>
void printarray(t arr[],t n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	bubblesort(arr,n);
	printarray(arr,n);
	int arr2[n];
	for(i=0;i<n;i++)
	{
		cin>>arr2[i];
	}
	bubblesort(arr2,n);
	printarray(arr2,n);
}

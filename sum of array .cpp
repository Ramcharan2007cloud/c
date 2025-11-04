#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"enter an number:";
	cin>>n;
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	sum=sum+arr[i];
}
	cout<<sum;
	}
	

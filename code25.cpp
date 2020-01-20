#include<iostream>
using namespace std;
void merge(int *,int,int);
void merging(int *,int,int,int);
void swap(int *,int *);
int num[6];
int main()
{
	int arr[]={7,3,7,2,42,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	merge(arr,0,n-1);
	int i;
	for(i=0;i<n;i++)
	cout<<num[i]<<" ";
	return 0;
}
void merge(int *arr,int low ,int high)
{
	if(low<high)
	{
		int mid=(low+(high-1))/2;
		merge(arr,low,mid);
		merge(arr,mid+1,high);
		merging(arr,low,mid,high);
	}
}
void merging(int *arr,int l,int r,int n)
{
	int i=l,j=r+1;
	while(i<=r&&j<=n)
	{
		if(arr[i]<arr[j])
		num[i]=arr[i++];
		else
		num[j]=arr[j++];
	}
	while(i<=r)
	num[i]=arr[i++];
	while(j<=n)
	num[j]=arr[j++];
	
}
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

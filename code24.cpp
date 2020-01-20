#include<iostream>
using namespace std;
void merge(int arr[],int []);
int main()
{
	int arr[7]={1,4,8,9,12,34,56};
	int brr[3]={9,12,32};
	int i=0,j=0,c[10],k=0;
	while(i<7&&j<3)
	{
		if(arr[i]>brr[j])
		{
			c[k++]=brr[j];
			j++;
		}
		else
		c[k++]=arr[i++];
	}
	while(j<3)
	{
		c[k++]=brr[j++];
	}
	while(i<7)
	c[k++]=arr[i++];
	for(k=0;k<10;k++)
	printf("%d ",c[k]);
	return 0;
}

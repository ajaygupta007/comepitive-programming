#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,k,arr[100000],sum=0,ans=0;
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++)
		{
		scanf("%d",&arr[i]);
		if((arr[i]-sum)%k==0)
		ans=ans+((arr[i]-sum)/k)-1;
		else
		ans=ans+((arr[i]-sum)/k);
		sum=arr[i];
	   }
	   printf("%d\n",ans);	
	}
	return 0;
	}

#include<bits/stdc++.h>
using namespace std;
#include<string.h>
#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
char str1[21],temp[21],sum1=0,sum2=0,f=1;	
while(t--)
{
	int n,i;
	scanf("%d",&n);
if(f==1)
{
scanf("%s",str1);
strcpy(temp,str1);
f=0;	
	}
for(i=0;i<(n-1);i++)
{		
if(temp==str1)
sum1++;
else
sum2++;
scanf("%s",str1);
}

}
return 0;
}	

#include<stdio.h>
using namespace std;
#include<bits/stdc++.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
char str[3][3];
int i,j;
for(i=0;i<3;i++)
scanf("%s",str[i]);
if((str[0][0]=='l'&& str[1][0] && str[1][1]) || (str[0][1]=='l' && str[1][1]=='l' && str[1][2]=='l')|| (str[1][0]=='l'&& str[2][0]=='l'&&str[2][1]=='l')||(str[1][1]=='l'&&str[2][1]=='l'&&str[2][2]=='l'))
printf("yes\n");
else
printf("no\n");
}
return 0;
}

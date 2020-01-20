#include<bits/stdc++.h> 
using namespace std; 
  #include<string.h>
  #include<stdio.h>
void printWords(string str) 
{ 
    // word variable to store word 
    string word; 
  
    // making a string stream 
    stringstream iss(str); 
  
    // Read and print each word. 
    while (iss >> word) 
       if(word[0]=='n'&& word[1]=='o'&& word[2]=='t' && word.size()==3 )
       {
       printf("Real Fancy\n");
       return ;
   }
   printf("regularly fancy\n");
   return ;
       
} 
  
// Driver code 
int main() 
{ 
int t;
scanf("%d\n",&t);
while(t--)
{
    char s[100];
  gets(s);
    printWords(s); 
}
    return 0; 
} 

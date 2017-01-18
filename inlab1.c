#include<stdio.h>
#include<string.h>
int main()
{
 int p;
 char n[10];
 scanf("%s%d",n,&p);
 if((int)(n[p-1]-'0')%2==0)
	printf("Even");
else
	printf("Odd");	 
 return 0;
}

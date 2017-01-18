#include<stdio.h>
void disp(int x,int y)
{
	if(y<0)
	printf("%d%di\n",x,y);
	else
	printf("%d+%di\n",x,y);
}
void add(int a1r,int a1i,int a2r,int a2i)
{
	int x,y;
	x=a1r+a2r;
	y=a1i+a2i;
	disp(x,y);
}
void sub(int a1r,int a1i,int a2r,int a2i)
{
	int x,y;
	x=a1r-a2r;
	y=a1i-a2i;
	disp(x,y);
}
void mul(int a1r,int a1i,int a2r,int a2i)
{
	int x,y;
	x=a1r*a2r-a1i*a2i;
	y=a1i*a2r+a1r*a2i;
	disp(x,y);
}
int main()
{
	int a1r,a1i,a2r,a2i;
	scanf("%d%d%d%d",&a1r,&a1i,&a2r,&a2i);
	add(a1r,a1i,a2r,a2i);
	sub(a1r,a1i,a2r,a2i);
	mul(a1r,a1i,a2r,a2i);
}

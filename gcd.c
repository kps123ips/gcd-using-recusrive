#include<stdio.h>
int GCD(int a,int b)
{
	if(a==b)
	return(a);
	if(a%b==0)
	return(b);
	if(b%a==0)
	return(a);
	if(a>b)
	return (GCD(a%b,a));
	else
	return (GCD(a,b%a));
}
main()
{
	
	printf("GCD is %d",GCD(100,25));
	getch();
}

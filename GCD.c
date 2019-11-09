// GCD using function
#include<stdio.h>
#include<stdlib.h>
int gcd(int m,int n)
{
   int rem;
   while(n!=0)
   {
	rem=m%n;
	m=n;
	n=rem;
   }
return(m);
}
int main()
{
int num1,num2,num3,gcd1,gcd2;
printf("Enter three positive integers\n");
scanf("%d%d%d",&num1,&num2,&num3);
if(num1==0 && num2==0 && num3==0)
   {
	printf("Invalid number\n");
	exit(0);
   }
gcd1=gcd(num1,num2);
gcd2=gcd(num3,gcd1);
printf("GCD of %d %d %d is : %d\n",num1,num2,num3,gcd2);
}

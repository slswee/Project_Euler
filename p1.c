//Problem 1, Multiples of 3 and 5
#include <stdio.h>
int main()
{

	int sum3=0;
	int sum5=0;
	int sum=0;

	int i;
	for (i=0; i<1000; i++){
	
	if (i%3==0)
	{
		sum3=sum3+i;
	} else if (i%5==0)
	{
		sum5=sum5+i;	
	}	

	}
	
	sum = sum3 + sum5;
	printf("sum is:%d\n", sum);


}

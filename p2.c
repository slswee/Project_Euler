//P2 find the sum of even number from the Fibonacci sequece

#include <stdio.h>

int main ()
{
	int first = 1;
	int second = 2;
	int next = 3;
	int sum_even = 2;
	while (next <= 4000000)
	{
		next = first + second;
		
		if (next%2 ==0)
		{
			sum_even = sum_even + next;			
		}
		
		first = second;
		second = next;
//		printf("sequence is:%d %d\n",next);	
	}

	printf("sum of even Fibonacci numbers is: %d\n", sum_even);
	
	return 0;

}

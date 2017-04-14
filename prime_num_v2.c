/*
 * test.c
 *
 *  Created on: 14-Apr-2017
 *      Author: Anurag
 */
#include<stdio.h>

int main()
{
	int num,count;

	printf("Enter a number to check prime number\n");fflush(0);
	scanf("%d",&num);
	if(num == 2)
	{
		printf("%d is a prime number\n",num);
		return(0);

	}
	else if(num % 2 != 0)
	{
		for(count=2;count<=num/2;count++)
		{
				if(num % count == 0)
				{
					printf("%d is not a prime number",num);
					return (0);
				}

		}

		printf("%d is a prime number.\n",num);
		return(0);
	}
	printf("%d is not a prime number.",num);
}




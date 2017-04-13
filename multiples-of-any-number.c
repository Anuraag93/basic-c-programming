/*
 * multiple.c
 *
 *  Created on: 13-Apr-2017
 *      Author: Anurag
 */
#include<stdio.h>


int main()
{
	int num,count,sum = 0,n = 1000,number=0;
	printf("enter a number\n");fflush(0);
	scanf("%d",&num);

	for (count = num;count <= n;count++)
	{
		if(count % num == 0)
		{
			printf("%d is a multiple of %d\n",count,num);
			sum= sum + count;
			number= number + 1;
		}
	}
	printf("sum of all the mutiples of %d is %d.\n",num,sum);
	printf("the number of multiples %d has %d.",num,number);


	return(0);
}


/*
 * palindrome.c
 *
 *  Created on: 17-Apr-2017
 *      Author: Anurag
 */
#include<stdio.h>

int main()
{
	printf("prg starts...\n");//fflush(0);
	int num,reverse=0,remainder,number;
	printf("enter a number:\n");fflush(0);
	scanf("%d",&num);
	number = num;
	while(num > 0)
	{
		remainder = num % 10;
		reverse = reverse * 10;
		reverse = reverse + remainder;
		num = num / 10;
	}
	printf("the reversed number is %d\n",reverse);
	if(number == reverse)
	{
		printf("%d is a palindrome",number);
	}
	else
	{
		printf("%d is not a palindrome",number);
	}
	printf("\nprg ends...");

}

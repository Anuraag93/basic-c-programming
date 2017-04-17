#include<stdio.h>

int main()
{
	printf("Prg Starts...\n");
	int num,not_prime=0;
	printf("enter a number: ");fflush(0);
	scanf("%d",&num);
	
	if(num == 2)
	{
		not_prime = 0;
	}
	else if(num % 2 !=0)
	{
			for(int count=2; count<=num/2; count++)

			{
				if(num%count==0)

				{
					not_prime = 1;
					break;
				}
			}
	}

	else
	{
		not_prime = 1;
	}
	if(not_prime == 0)
	{
		printf("%d is a prime number\n",num);
	}
	else
	{
		printf("%d is not a prime number\n",num);
	}
	printf("Prg Ends...");
}


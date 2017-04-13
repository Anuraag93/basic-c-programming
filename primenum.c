#include<stdio.h>

int main(void)

{

	int number, count;
	printf("enter the number:");//fflush(0);
	scanf("%d\n",&number);

	printf("entered number: %d\n",number);
	for(count=2; count<=number/2; count++)
	{
		if(number%count==0)
		{
			printf("%d is not a prime number\n",number);
			return (0);

		}

	}
	printf("%d is a prime number\n",number);

	return (0);

}

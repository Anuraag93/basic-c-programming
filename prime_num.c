//prime-number


# include <stdio.h> 
int main() 
{
   int num;
   printf("Enter a number to check prime number"/n);
   scanf("%d",num);
   If(num == 2)
   {
       Printf("%d is a prime number",num);
   }
   Else
   {
        For(count=2;count<=num/2;count++)
        {
		if(num % count != 0)
		{
		   Printf("%d is a prime number",num);	
		}
		
	}
   }
}
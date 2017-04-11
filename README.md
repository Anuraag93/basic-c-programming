# basic-c-programming

#include <stdio.h>
void main()
{
  int i,total=0, num, value;
  float avg_of_num;
  printf ("enter how many numbers to be read");
  scanf ("%d",num);
  
  for(i=0;i<num;i++)
  {
    printf ("enter the number:/n");
    scanf ("%d",value);
    total = total + value;
    
  }
  avg_of_num = total / num;
  
  
  printf("average of the %d numbers is %d",num,avg_of_num);
  
  return 0;
}

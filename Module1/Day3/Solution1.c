/*Write a program to print the given pattern below using 3 functions (1st to accept n and to print from 1 to n, 2nd to accept n and print spaces in between, 3rd to accept the n and print from n to 1)
1234554321
1234  4321
123    321
12      21
1        1      */

#include<stdio.h>
int main()
{
  int i,j,k;
  for(i=5;i>=1;i--)
  {
    for(j=1;j<=4;j++)
    {
      if(j<=i)
        printf("%d",j);
      else
        printf(" ");
    }
    for(j=5;j>=1;j--)
    {
      if(j<=i)
        printf("%d",j);
      else
        printf(" ");
    } 
    printf("\n");
  }
  return 0;
}
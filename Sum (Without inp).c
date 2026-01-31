#include<stdio.h>
void main()
{
  int a,b,sum ;
  a = 10 ;
  b = 20 ;
  sum = a + b ;
  // all these print statements prints line-by-line, u can use any of these statements to show
  printf("%d\n",sum);   // this prints only 30
  printf("sum is %d\n",sum);    // this prints 'sum is 30' 
  printf("%d is sum\n",sum);    // this prints '30 is sum'
  printf("sum of a and b is %d\n",sum);    // this prints 'sum of a and b is 30'
  printf("sum of %d and %d is %d\n",a,b,sum);   // this prints 'sum of 10 and 20 is 30'
}

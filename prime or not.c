#include <stdio.h>
int main()
{
  int a, b, c, d, e, f;
  printf("Enter number :");
  scanf("%d", &a);

  for (int i = 2; i < a ; i++){
    if (a % i != 0)
    {
      if (i == a - 1)
        printf ("%d is PRIME",a);
      else 
      continue;
    }
    else 
    {
      printf ("%d is NOT PRIME",a);
      break;
    }}
    if(a<=1)
    {
     printf("%d is NOT PRIME",a);}
  
  return 0;
}
#include <stdio.h>

void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1,int den1, int num2, int den2, int *num3, int *den3);
void output(int num1, int den1, int num2, int den2, int num3, int den3);

int main()
{
  int num1, den1, num2, den2, num3, den3;
  input(&num1, &den1, &num2, &den2);
  add(num1, den1, num2, den2, &num3, &den3);
  output(num1, den1, num2, den2, num3, den3);
  return 0;
}

void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("Enter the numerator and denominator :\n");
  scanf("%d %d", num2, den2);
  scanf("%d %d", num1, den1);
}

void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
  int lcm;
  for(int i = 2; i; i++)
  {
    if(i % den1 == 0 && i % den2 == 0)
    {
      lcm = i;
      break;  
    }
  }
  *num3 = (lcm/den1) + (lcm/den2);
  *den3 = lcm;
}

void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("%d/%d + %d/%d = %d/%d\n", num1, den1, num2, den2, num3, den3);
}

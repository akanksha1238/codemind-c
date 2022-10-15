#include<stdio.h>
int reverseDigits(int num)
{
    int rev = 0;
	 while (num > 0)
	 {
	     rev = rev * 10 + num % 10;
		 num /= 10;
	  }
	  return rev;
}
int square(int num)
{
    return (num * num);
}
int checkAdamNumber(int num)
{
    int a = square(num);
	int b = square(reverseDigits(num));
	if (a == reverseDigits(b))
	return 0;
	return 1;	
}
int main()
{
	int num;
	scanf("%d",&num);
	if (checkAdamNumber(num))
	{
	    printf("False");
	}
	else
	{
	    printf("True");
	}
	return 0;
}

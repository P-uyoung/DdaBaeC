#include <stdio.h>

long loop_factorial(int n);
long recursive_factorial(int n);

int main()
{
	int num = 0;

	scanf("%d", &num);

	printf("%d\n", loop_factorial(num));
	printf("%d\n", recursive_factorial(num));

	return 0;
}

long loop_factorial(int n)	// 3! = 3 * 2 * 1
{
	long value = 1;

	for (int i = n; i > 1; i--)
		value *= i;

	return value;
}

long recursive_factorial(int n)	// 3! = 3 * 2!
{
	long value = n;
	
	if (n > 1)
		value *= recursive_factorial(n - 1);

	if (n == 0)
		value = 1;

	return value;
}
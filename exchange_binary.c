#include <stdio.h>

int count;
unsigned long ans = 0;

void print_binary_loop(unsigned long n);
void print_binary_recursive(unsigned long n);

int main()
{
	unsigned long num = 34;

	print_binary_loop(num);
	print_binary_recursive(num);

	printf("\n");

	return 0;

}

void print_binary_loop(unsigned long n)
{
	unsigned long ans = 0;
	int prod = 0, count = 0;

	for (int i = n; i > 0; i /= 2)
	{
		prod = i % 2;
		count++;

		for (int j = 1; j < count; j++)
			prod *= 10;

		ans += prod;
	}

	printf("%u의 이진수 = %d\n", n, ans);

}

void print_binary_recursive(unsigned long n)
{
	int prod = 0;

	count++;
	prod = n % 2;
	
	for (int i = count; i > 1; i--)
		prod *= 10;

	ans += prod;

	if (n > 0)
		print_binary_recursive(n / 2);
	
	count--;
	
	if (count == 0)
		printf("%u의 이진수 = %d\n", n, ans);
	
}


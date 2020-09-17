#include "print_functions.h"
#include <stdio.h>

int main()
{
	print_hello();
	print_hi();
	print_hello();
	print_hi();
	print_str("No one lives forever.");
	print_str("Valar morghulis");

	printf("Hello!");

	return 0;
}

// 긴 코드를 간략하게, 다른 소스에서도 사용가능

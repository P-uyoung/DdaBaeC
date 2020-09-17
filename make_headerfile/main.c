#include "print_functions.h"
#include <stdio.h>	// 헤더파일에 없고, print_functions.c 소스파일 include 했으므로

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

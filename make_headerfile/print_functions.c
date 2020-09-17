#include "print_functions.h"
#include <stdio.h>	// 헤더파일에 없고, print_functions.c 소스파일 include 했으므로

void print_hello()
{
	printf("Hello\n");
	// many more lines
}

void print_hi()
{
	printf("Hi\n");
	// many more lines
}

void print_str(char* str)
{
	printf("%s\n", str);
}
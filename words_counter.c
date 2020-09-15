#include <stdio.h>
#include <ctype.h>
#define STOP '.'

int main()
{
	char c;
	int n_chars = 0, n_lines = 0, n_words = 0;
	int word_flag = 0, line_flag = 0;	// **insight

	printf("Enter text :\n");

	while ((c = getchar()) != STOP) // ����Ư����, �����δ� �ܾ� �ϳ����� �ƴ϶�, �Ѳ����� �ް� �����Ѵ�
	{
		if (!isspace(c))
			n_chars++;

		if (!isspace(c) && !word_flag)
		{
			n_words++;
			word_flag = 1;
		}

		if (isspace(c))	// ' ' �Ӹ� �ƴ϶�, '\n'���ڵ� �����ؾ� �Ѵ�
			word_flag = 0;

		if (!isspace(c) && !line_flag)
		{
			n_lines++;
			line_flag = 1;
	
		}

		if (c == '\n') 
			line_flag = 0;

	}

	printf("Characters = %d, Words = %d, Lines = %d\n", n_chars, n_words, n_lines);
	return 0;

}
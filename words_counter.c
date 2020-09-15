#include <stdio.h>
#include <ctype.h>
#define STOP '.'

int main()
{
	char c;
	int n_chars = 0, n_lines = 0, n_words = 0;
	int word_flag = 0, line_flag = 0;	// **insight

	printf("Enter text :\n");

	while ((c = getchar()) != STOP) // 버퍼특성상, 실제로는 단어 하나씩이 아니라, 한꺼번에 받고 동작한다
	{
		if (!isspace(c))
			n_chars++;

		if (!isspace(c) && !word_flag)
		{
			n_words++;
			word_flag = 1;
		}

		if (isspace(c))	// ' ' 뿐만 아니라, '\n'문자도 포함해야 한다
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
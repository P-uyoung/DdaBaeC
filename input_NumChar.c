#include <stdio.h>

void display(char cr, int lines, int width);

int main()
{
	char c;
	int rows, cols;

	printf("Input one character and two integers :\n");

/*	while(1)
	{
		scanf("%c %d %d", &c, &rows, &cols);
		while (getchar() != '\n') continue;	// ClearInputBuffer
		display(c, rows, cols);

		if (c == '\n') // Note :scanf() 세개 받아야 break 읽는 상황 ..
			break;
	}
*/
	// **insight :문자, 숫자 분리해서 받는다
	while ((c = getchar()) != '\n')
	{
		scanf("%d %d", &rows, &cols);
		
		while (getchar() != '\n') continue;
		
		display(c, rows, cols);

		printf("Input another character and two integers :\n");
		printf("Press Enter to quit. \n");
	}

	return 0;

}

void display(char cr, int lines, int width)
{
	for (int r = 0; r < lines; r++)
	{
		for (int c = 0; c < width; c++)
			printf("%c", cr);
		printf("\n");
	}
}
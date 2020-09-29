#include <stdio.h>
#include <string.h>

#define MAX_TITLE 40
#define MAX_AUTHOR 40
#define MAX_BOOKS 3

char* s_gets(char* st, int n)
{
	char* ret_val;	// return value
	char* find;

	ret_val = fgets(st, n, stdin);	// vs. scanf()
	if (ret_val)
	{
		find = strchr(st, '\n');	// looking for newline
		if (find)					// if the address is not NULL
			*find = '\0';			// place a null character there (c언어 스타일 문자열로 바꿈)
		else
			while (getchar() != '\n')
				continue;			// dispose of rest of line
	}

	return ret_val;
}

int main()
{
	typedef struct {
		char title[MAX_TITLE];
		char author[MAX_AUTHOR];
		float price;
	}book;

	book books[MAX_BOOKS] = { {"Empty", "Empty", 0.0f}, };
	int count = 0;

	
	while (1) 
	{
		printf("Input a book title or press [Enter] to stop.\n>>");
		s_gets(books[count].title, MAX_AUTHOR);
		if (books[count].title[0] == '\0') break;

		printf("Input the author.\n>>");
		s_gets(books[count].author, MAX_AUTHOR);

		printf("Input the price.\n>>");
		scanf("%f", &books[count].price);
		while (getchar() != '\n')
			continue;

		count++;

		if (count == MAX_BOOKS)
		{
			printf("No more books.\n");
			break;
		}

	}

	if (count > 0)
	{
		printf("The list of books:\n");

		for (int i = 0; i < count; i++)
			printf("\"%s\" written by %s: $%f\n",
				books[i].title, books[i].author, books[i].price);
	}

	else
		printf("No books to show.\n");
	
	return 0;
}
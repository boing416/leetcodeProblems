#include<stdio.h>
#include<ctype.h>
#include<string.h>

char* toLowerCase(char* str)
{

	int length = strlen(str);
	for(int i = 0; i < length; i++)
	{
		if(str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] = str[i] + ('a'-'A');
		}
	}

	
	return str;	
}


int main()
{
	char str[] = "LOVELY";

	char *temp = toLowerCase(str);

	int i = 0;

	while(temp[i])
	{
	
		printf("%c ",temp[i]);
		i++;
	}
	printf("\n");
	char a = 'L' +  ('a'-'A');
	printf("L: %c\n",a);

	return 0;
}


#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	
	gets(str);
	printf("%s\n",str);
	strrev(str);
	printf("%s\n",str);
	return 0;
}	

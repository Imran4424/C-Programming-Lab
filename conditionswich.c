#include <stdio.h>

int main()
{
	int age;
	scanf("%d",&age);
	switch(age){
		case 1:
			printf("Baby\n");
			break;
		case 14:
			printf("Teenager\n");
			break;
		default:
			printf("Adult\n");
			break;
	}
	return 0;

}				

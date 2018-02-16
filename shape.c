#include <stdio.h>

int main()
{
	int a,b,c,d,e;
	for(e=1;e<=3;e++){
		printf(" ");
	}
	printf("0\n");
	for(a=1;a<=3;a++){
		for(c=1;c<=3-a;c++){
			printf(" ");
		}
		for(b=1;b<=a;b++){
			printf("%d",b);
		}
		printf("0");
		for(d=a;d>=1;d--){
			printf("%d",d);
		}
		printf("\n");
	}
	return 0;
}					

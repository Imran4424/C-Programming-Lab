#include <stdio.h>

int main()
{
	int i,j,g,n;
	scanf("%d",&n);
	
	if(n<36 && n>0){
		for(i=1;i<=n;i++){
			for(g=n-i;g>=1;g--){
				printf(" ");
			}
			for(j=1;j<=2*i-1;j++){
				if(i<=9){
					printf("%d",i);
				}
				else if(i>9){
					printf("%c",97+i-10);
				}
			}
			printf("\n");
		}
		for(i=n-1;i>=1;i--){
			for(g=n-i;g>=1;g--){
				printf(" ");
			}
			for(j=2*i-1;j>=1;j--){
				if(i<=9){
					printf("%d",i);
				}
				else if(i>9){
					printf("%c",97+i-10);
				}
			}
			printf("\n");
		}
	}
	
	else if(n>=36){
		printf("sorry,we can not process it.input is above 35\n");
	}					
	else if(n<=0){
		printf("sorry,we can not process it.input is below 1\n");
	}
	
	return 0;
	
}					

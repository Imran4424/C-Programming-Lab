#include <stdio.h>

int main()
{
	int i,j,n;
	scanf("%d",&n);
	printf("\n");
	
	if(n>9){
		printf("Sorry,we can not process it.Input is above 9\n");
	}
	else if(n<1){
		printf("Sorry,we can not process it.Input is below 1\n");
	}	
		
	else{
		for(i=1;i<=n;i++){
	
			for(j=1;j<=n;j++){
		
				printf("%d",i);
			
			}
			printf("\n");
		}
	}
	return 0;
			
}

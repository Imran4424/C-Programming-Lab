#include <stdio.h>

int main()
{
	int a[10],i,j;
	for(i=0;i<10;i++){
		//a[i]=i+1;
		scanf("%d",&a[i]);
	}
	for(j=0;j<10;j++){
		if(a[j]==a[j+1]){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}
	}
	return 0;
}					

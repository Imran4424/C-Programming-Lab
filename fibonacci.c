#include <stdio.h>

int main()
{
	int a=0,b=1,c,y,n;
	scanf("%d",&n);
	printf("%d %d ",a,b);
	
	for(y=1;y<n-1;y++){
		c=a+b;
		a=b;
		b=c;
		printf("%d ",b);
	}
	printf("\n");
	return 0;
}		

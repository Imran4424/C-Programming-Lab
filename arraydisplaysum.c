#include <stdio.h>

int main()
{
	int a[100],i,sum=0;
	for(i=0;i<100;i++){
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("%d\n",sum);
	return 0;
}		

#include <stdio.h>

int main()
{
	int a[100],i,sum=0;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	sum=sum/5;
	printf("%d\n",sum);
	return 0;
}		

#include <stdio.h>

int main()
{
	int a,i,j,sum=0;
	for(i=1;i<=3;i=i++){
		a=1;
		for(j=1;j<=i;j=j++){
			a=a*i;
		}
		
		sum=sum+a;
	}
	printf("result is %d\n",sum);
	return 0;
}		


#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c,d,n,sum=1;
	scanf("%d%d%d",&a,&b,&n);
	for(c=1,d=2;c<n,d<=n;c++,d++){
		sum=sum+pow(a,c)*pow(b,d);
	}	
	printf("%d\n",sum);
	return 0;
}	

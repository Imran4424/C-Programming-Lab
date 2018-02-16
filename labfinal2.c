#include <stdio.h>

int main()
{
	int n,i;
	double x,y,sum=0.0;
	printf("input n\n");
	scanf("%d",&n);
	printf("input x  and y\n");
	scanf("%lf%lf",&x,&y);
	int a[n];
	printf("input n numbers\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			sum=sum+a[i]*x;
		}
		else if(a[i]%2==1){
			sum=sum+a[i]*y;
		}
	}
	
	printf("%.3lf\n",sum);
	
	return 0;
			
}				

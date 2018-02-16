#include <stdio.h>

int main()
{
	int n,i,j,a[100],sum1=0,sum2=0,sum3=0,sum4=0;
	
	scanf("%d",&n);
	printf("input %d numbers\n",n);
	
	for(i=0;i<n;i++){
		
		scanf("%d",&a[i]);
	}
	
	for(j=0;j<n;j++){
		
		if(a[j]%2==0){
			sum1=sum1+1;
			
			
		}
		
		if(a[j]%2==1){
				sum2=sum2+1;
				
		}
		
		if(a[j]>0){
			sum3=sum3+1;
			
		}
		if(a[j]<0){
			sum4=sum4+1;
			
		}
		
	}
	printf("even numbers: %d\n",sum1);
	printf("odd numbers: %d\n",sum2);
	printf("positive numbers: %d\n",sum3);
	printf("negative numbers: %d\n",sum4);
	
	return 0;
	
}				
			
					


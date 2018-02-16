#include <stdio.h>

int perfect(int n)
{
	int a;
 	int sum=0;
 	for(a=1;a<=n;a++){
 		if(n%a==0 && n!=a ){
 		
 			printf("%d ",a);
 			sum=sum+a;
 		}
 			
 	}
 	return sum;
 	
} 	
 	
	
int main()
{
	int n;
	int per=0;
	scanf("%d",&n);
	per=perfect(n);
	printf("\n%d",per);	
	if(n==per){
 		printf("\n%d is a perfect number\n",n);
	}
	else{
		printf("\n%d is not perfect\n",n);
}
	
	
 	return 0;
} 	

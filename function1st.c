#include <stdio.h>

int minimum(int a,int b)
{
	int temp;
	if(a<b){
		temp =a;
	}
	else{
		temp=b;
	}		
	return temp;
}
int main()
{
	int a,b,smaller=0;
	scanf("%d%d",&a,&b);
	smaller=minimum(a,b);
	printf("smaller is %d\n",smaller);
	return 0;
}	
	

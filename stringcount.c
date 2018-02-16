#include <stdio.h>
#include <string.h>

int main()
{
	char str[30],ch,n,sum=1;
	int i;
	scanf("%s",str);
	printf("%s\n",str);
	n=strlen(str);
	for(i=0;i<n;i++){
		
		printf("%c = %d\n",str[i],sum);
		
		if("%c==%d",str[i],str[0]){
			sum=sum+1;
		}	
	}
	return 0;
}	

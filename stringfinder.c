#include <stdio.h>
#include <string.h>

int main()
{
	char str[30],str2[30];
	int i,j,l,m,sum=0;
	gets(str);
	puts(str);
	gets(str2);
	puts(str2);
	
	l=strlen(str);
	m=strlen(str2);
	
	printf("length %d\n",l);
	
	for(i=0;i<l;i++){
		for(j=0;j<m;j++){
			if(str[i]==str2[j] ){
				sum=sum+1;
			}
		}
	}			
	
	if(l<=sum){
		printf("Yes, %s is in %s\n",str,str2);
	}
	else{
		printf("No, %s is not in %s\n",str,str2);
	}
	
	return 0;
}			

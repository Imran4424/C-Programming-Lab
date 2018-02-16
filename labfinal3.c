#include <stdio.h>
#include <string.h>

int main()
{
	int i,l,sum=0;
	char ch,str[50];
	
	gets(str);
	puts(str);
	
	l=strlen(str);
	
	scanf("%c",&ch);
	for(i=0;i<=l;i++){
		sum=sum+1;
	}
	
	for(i=0;i!='0';i++){
		if(str[i]==ch){
			str[i]==sum;
		}
		if(str[i]==' '){
			str[i]='@';
		}
		if(str[i]==','){
			str[i]='#';
		}
		if(str[i]=='.'){
			str[i]='&';
		}
	}
	
	puts(str);
	
	return 0;
					
}

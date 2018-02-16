#include <stdio.h>

int a,b,c;
void arrange(int a,int b,int c)
{

}
int maximum(int take)
{
	if(a>b>c>take){
		
	}
	else if(a>b>c && take>c){
		c=take;
	}	
	else if(a>take>b && take>b>c){
		c=b;
		b=take;
	}
	else if(take>a>b>c){
		c=b;
		b=a;
		a=take;
	}
}

main()
{
	int h1,h2,h3,ta[10],x,y,z,i,big,ar;
	scanf("%d%d%d",&x,&y,&z);
	if(x>y){
		if(x>z){
			if(y>z){
				h1=x;
				h2=y;
				h3=z;
			}
			else{
				h1=x;
				h2=z;
				h3=y;
			}
		}
		else{
			h1=z;
			h2=x;
			h3=y;
		}				
	}
	else{
		if(y>z){
			if(x>z){
				h1=y;
				h2=x;
				h3=z;
			}
			else{
				h1=y;
				h2=z;
				h3=x;
			}
		}
		else{
			h1=z;
			h2=y;
			h3=x;
		}					
	}
	ar=arrange(h1,h2,h3);
	
	for(i=0;i<7;i++){
		scanf("%d",&ta[i]);
	}
			
	for(i=0;i<7;i++){
			
		big=maximum(ta[i]);
				
	}
	
	printf("%d %d %d\n",a,b,c);
}	

#include <stdio.h>

int average(int a,int b,int c)
{
	float d;
	
	d=(a+b+c)/3;
	
	return d;
}

int main()
{
	int x,y,z,i,n;
	float avg;
	char f;
	//scanf("%d",&n);
	do{
		if(i==1){
			scanf("%d%d%d",&x,&y,&z);
			avg=average(x,y,z);
			printf("average is %.3f\n",avg);
		}	
		else{
			printf("will you like to continue the program\n");
			getchar();
			scanf("%c",&f);
			if(f=='y' || f=='Y'){
				scanf("%d%d%d",&x,&y,&z);
				avg=average(x,y,z);
				printf("average is %.3f\n",avg);
			}
			else if(f=='n' || f=='N'){
				break;
			}
			else{
				printf("wrong input\n");
			}
		}					
	}while(i>1);
	printf("\n");
	return 0;
}	
	

	

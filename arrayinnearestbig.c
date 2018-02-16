#include <stdio.h>

int main()
{	int n,i,m,j,t=0,u=500;
	printf("array size\n");
	scanf("%d",&n);
	int a[n+1];
    printf("input array elements\n");

	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	printf("input m value\n");
	scanf("%d",&m);
	for(i=m;i<=n;i++){
		if(a[i]<a[i+1]){
			t=i+1;
			i=n+1;
		}
	}

    for(j=m;j>0;j--){

		if(a[j]<a[j-1]){
			u=j-1;
			j=0;
		}
	}
	printf("%d-th room has: %d\n",m,a[m]);

	if( ((t-m)==(m-u)) && t!=0 && u!=500){
		printf("Nearest Larger Number(NLN): %d\n",a[t]);
		printf("NLN's room number: %d\n",t);
        printf("Direction: Right\n");

        printf("Nearest Larger Number(NLN): %d\n",a[u]);
        printf("NLN's room number: %d\n",u);
        printf("Direction: Left\n");

	}
	else if((t!=0 || u!=500) && ((t-m)<(m-u))){
        printf("Nearest Larger Number(NLN): %d\n",a[t]);
		printf("NLN's room number: %d\n",t);
        printf("Direction: Right\n");
	}

	else if((t!=0 || u!=500) && ((t-m)>(m-u))){
        printf("Nearest Larger Number(NLN): %d\n",a[u]);
		printf("NLN's room number: %d\n",u);
        printf("Direction: Left\n");
	}

	else if(t==0 && u==500){
		printf("Nearest Big Number Unavailable\n");
	}

	return 0;
}

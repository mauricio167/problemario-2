#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int *p,n,opc,i,j,m,aux;
	
	scanf("%d", &n);
	
	p = (int*)malloc(n* sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	scanf("%d",&opc);
	switch (opc){
	case 1:
	for(i=n-1;i>=0;i--){
		printf("%d ",p[i]);
	}
	break;
	case 2: 
		for(i=0;i<n;i++){
			printf("%d ",p[i]);
		}
		break;
	case 3:
		for(i=0;i<n;i++){
			m=i;
		for(j=i+1;j<n;j++){
			if(p[j]<p[m]){
				m=j;
			}
		}
		aux=p[i];
		p[i]=p[m];
		p[m]=aux;
		}
		for(i=n-1;i>=0;i--){
			printf("%d ", p[i]);
		}
		break;
	default:
		break;
	}

	return 0;
}
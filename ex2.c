#include <stdio.h>
#include <stdlib.h>
#define TAM 4

int* uniao(int* v1,int n1,int* v2,int n2);

int main(){
	
	int a[TAM]={1,2,3,4};
	int b[TAM]={6,7,8,9};
	int i,j;
	
	int *p = uniao(a,sizeof(a)/4,b,sizeof(b)/4);//chamada func uniao passando os tam de a e b
	// e os vetores a e b
	
	j=sizeof(a)/4+sizeof(b)/4;
	
	for(i=0;i<j;i++){
		printf("%d\n",p[i]);//imprime os vetores
		}
	
	free(p);
return 0;	
	}

int* uniao(int* v1,int n1,int* v2,int n2){
	int n3,j,k;
	
	n3=n1+n2;
	
	int *p=(int*)calloc(n3,sizeof(int)*n3);
	
	for(j=0;j<n1;j++){
		p[j]=v1[j];
	}
	for(k=0;k<n2;k++){
		p[n1]=v2[k];
		n1++;
	}
		
return p;
	
	}

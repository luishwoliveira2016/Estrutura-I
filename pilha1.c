#include <stdio.h>
#include <stdlib.h>

int push();
int pop();

int main(){
	
	int i;
	char c[29]="ESTE EXERCICIO E MUITO FACIL";
	char *p;
	
	p=(char*)malloc(sizeof(c));
	
	for(i=0;i<30;i++){
		printf("%c",c[i]);
		}
	
	
	return 0;
	}
	
int push(char a,int topo){}	
int pop(char *pilha[],char c,int topo){}


#include <stdio.h>
#include <stdlib.h>

int main(){
	
		int *p = (int*)malloc(sizeof(int)*5);
		do{
			scanf("%d",p);
			
			if(scanf("%d",p)==0){
				return 0;
			}else{
				p=(int*)realloc(p,sizeof(int)*5);
			}
		}while(1);
	
return 0;
}

#include <stdio.h>

int main(){

	int n1,fact=1;
	scanf("%d", &n1);  
	for(int i=1;i<=n1;i++){
		fact=fact*i;
	} 
	printf("%d",fact);
	return 0;
	           	                  
	}
#include <stdio.h>
#include<string.h>

int main(){
	int T;
	int m[]={6,2,5,5,4,5,6,3,7,6};
	scanf("%d", &T);              	                  
	for(int t=0; t<T;t++){
		char N[100];
		scanf("%s",N);
		int tot=0;
		for(int i=0;i<strlen(N);i++){
              tot+=m[N[i]-'0'];
		}
		if(tot %2 ==1){
			printf("7");
			tot-=3;
		}
		for(int i=0;i<tot/2;i++){
			printf("1");
		}
		printf("\n");
	}
	return 0;
}
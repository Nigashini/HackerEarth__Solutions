#include <stdio.h>

int main(){
	int i,r,k;
	int count=0;
	scanf("%d", &i);              	                 
	scanf("%d", &r);  
	scanf("%d", &k);
	 for(int j=i;j<=r;j++){
		if(j%k==0){
			count++;
		}
	 } 
	 printf("%d",count);
	 return 0;        
}
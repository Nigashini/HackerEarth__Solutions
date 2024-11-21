#include <stdio.h>
int main(){
	int N ;
	scanf("%d", &N);
	long l;
	long data[N];
	for(auto i=0; i<N; i++){
	    scanf("%ld ", &data[i]);
		}
		for(auto i=0; i<N; i++){
			l= data[i]%10;
			
			}
		if(l % 10==0){
			
                      printf("Yes");
		        }
		else{
		
                  printf("No");
		 
                    }
    
                return 0;
                 }
#include <stdio.h>
#include <string.h>

int main(){
	char str[20];
	int x=0,y=0;
	scanf("%s", str); 
	int len=strlen(str);
	for(int i=0;i<len;i++){
     if(str[i]=='z'){
		x++;
	 }
	 if(str[i]=='o'){
		y++;
	 }
	}
	
	if(y==2*x){
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
                                	                  
}

#include <stdio.h>
#define MOD 1000000007//(10^9+7)

int main(){
	int num;
	scanf("%d", &num);         	                 
	long long ans=1;
	for(int i=0;i<num;i++){
		int n;
		scanf("%d",&n);
		 ans=(ans*n)% MOD;
	}
	printf("%d",ans);
	return 0;
}
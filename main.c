#include <stdio.h>

long n,k;

int main(){
	
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);	
    
	scanf("%ld%ld",&n,&k);
	int i,p=1,s=0;
	
	do{
		p=p*(n%k);
		s=s+(n%k);
		n=n/k;
	}while(n>0);

	printf("%d", p-s);
	return 0;
}


 
 



#include <stdio.h>

long n;

int main(){
	
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);	
    
	scanf("%d",&n);
	int i,l=0,count=0;
	
	do{
		if(n%2)count++;
		n=n/2;
	}while(n>0);

	printf("%d", count);
	return 0;
}


 
 



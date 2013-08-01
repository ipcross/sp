#include <stdio.h>

long n;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);	
	int i,m[100],p=0;
 	scanf("%ld",&n);
	do{
		m[p]=n%3;
		n=n/3;
		if(m[p]==0){
			m[p]=3;
			n=n-1;
		}
		p++;
	}while(n>0);
	for(i=p-1;i>=0;i--)printf("%d",m[i]);	
	return 0;
}

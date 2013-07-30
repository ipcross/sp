#include <stdio.h>
#include <string.h>

long m,l;

int main(){
	
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);	

 	scanf("%d",&m);
	int i,flag=0,t;
	
	do{
		
		t=m%2;
		if(flag==0&&t) flag=1;
		if(flag) l=2*l+t;
		m=m/2;
	}while(m>0);   

	printf("%ld", l);
	return 0;
}


 
 



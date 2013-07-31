#include <stdio.h>
#include <string.h>

long n;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);	
	int i,m[100],p=0,tmp;
 	scanf("%ld",&n);
	do{
		m[p]=n%3;
		p++;
		n=n/3;
	}while(n>0);
	for(i=0;i<p/2;i++){
		tmp=m[i];
		m[i]=m[p-1-i];
		m[p-1-i]=tmp;
	}
	i=1;
	while(1){
		if(m[i]==0){
			if(m[i-1]==1){
				m[i-1]=0;
				m[i]=3;
				if(i>1)i=i-2;
			}
			if(m[i-1]==2){
				m[i-1]=1;
				m[i]=3;
			}
			if(m[i-1]==3){
				m[i-1]=2;
				m[i]=3;
			}
			i++;
		}
		else i++;	
		if(i==p-1 && m[i]!=0)break;
	}
	for(i=0;i<p;i++) 
		if(m[i])printf("%d",m[i]);	
	return 0;
}

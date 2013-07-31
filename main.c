#include <stdio.h>
#include <string.h>

long n,tmp;

char simvol(int num)
{
	if(num<10)return char(48+num);
	if(num>9)return char(55+num); 
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);	

	int i,j,m[40],p=0,l;
	char s[1000];
	
 	scanf("%ld",&n);
	
	for(i=2;i<=36;i++){
		l=-1;
		tmp=n;
		do{
			l++;
			s[l]=simvol(tmp%i);
			tmp=tmp/i;
		}while(tmp>0);
		l++;
		s[l]='\0';
	
		if(l==1){
			m[p]=i;
			p++;		
		}
	
		for(j=0;j<l/2;j++){
			if(s[j]!=s[l-1-j])break;
			if(j==l/2-1){
				m[p]=i;
				p++;
			}
		}
	}
	
	if(p==0) printf("none");
	else {
		if(p==1) printf("unique\n%d",m[0]);
		else{
			printf("multiple\n");
			for(i=0;i<p;i++) printf("%d ",m[i]);
		}
	}
	return 0;
}

#include <stdio.h>

int **a, n, m, i, j, count=0;
char *str,tmp;

int main(){
	
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);	
    
	scanf("%d%d",&n,&m);

	str=new char[m];
	a = new int*[n+2];
	for(i=0;i<n+2;i++) a[i]=new int[m+2] ;

	for(i=0;i<n+2;i++)
		for(j=0;j<m+2;j++) a[i][j]=0;
		
	for(i=0;i<n;i++){
		scanf("%s",str);
		for(j=0;j<m;j++)
			if(str[j]=='*')a[i+1][j+1]=1;
	}	
	
	for(i=1;i<n+1;i++)
		for(j=1;j<m+1;j++)
			if(a[i][j]==0 && (a[i-1][j]+a[i][j-1]+a[i][j+1]+a[i+1][j])==0)count++;

	printf("%d",count);
}

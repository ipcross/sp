#include <stdio.h>
#include <algorithm>

int **a, n, m, k, i,j,l,x,y;

int main(){
	
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);	
    
	scanf("%d%d%d",&n,&m,&k);

	a = new int*[n+2];
	for(i=0;i<n+2;i++) a[i]=new int[m+2] ;

//	for(i=0;i<n+2;i++)
//		for(j=0;j<m+2;j++) a[i][j]=0;

	for(l=0;l<k;l++){
		scanf("%d%d",&x,&y);
		if(a[x][y]!=9)
		{
			a[x][y]=9;
			if(a[x-1][y-1]!=9)a[x-1][y-1]++;
			if(a[x-1][y]!=9)a[x-1][y]++;
			if(a[x-1][y+1]!=9)a[x-1][y+1]++;
			if(a[x][y-1]!=9)a[x][y-1]++;
			if(a[x][y+1]!=9)a[x][y+1]++;
			if(a[x+1][y-1]!=9)a[x+1][y-1]++;
			if(a[x+1][y]!=9)a[x+1][y]++;
			if(a[x+1][y+1]!=9)a[x+1][y+1]++;
		}	
	}	
	
	for(i=1;i<n+1;i++){
		for(j=1;j<m+1;j++){
			if(a[i][j]==0)printf(".");
			else { if(a[i][j]==9)printf("*");
			else printf("%d",a[i][j]);}
		}
		if(i!=n)printf("\n");
	}	
	
}

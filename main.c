#include <stdio.h>

int a[120][120], n, i=1, j, k, p;

int main(){
	
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);	
    
	scanf("%d",&n);
	p=n/2;

	for(k=1; k<=p; k++)//kol-vo spiralei
	{	//verhn.goriz riyad
		for(j=(k-1); j<(n-k+1); j++)
			a[k-1][j]=i++;
		//pravi verhn. stolbec
		for(j=k; j<(n-k+1); j++)
			a[j][n-k]=i++;
		//nizhni goriz riyad
		for(j=(n-k-1); j>=k-1; j--)
			a[n-k][j]=i++;
		//levi kraini stolbec
		for(j=n-k-1; j>=k; j--)
			a[j][k-1]=i++;
	}
	
	if (n%2)
		a[p][p]=n*n;
  
	for(i=0; i<n; i++)
		for(j=0; j<n; j++){
			printf("%5d ",a[i][j]);
			if(j==(n-1)) printf("\n");
		}		
	return 0;
}


 
 



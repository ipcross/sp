#include <stdio.h>

int a[120][120], n, i=1, j, k, p;

int main(){
	
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);	
    
	scanf("%d",&n);
	int i=1,j=1,k=1;
	a[i][j] = k;

	if(n==1){
		printf("%d",1);
		return 0;
	}

	while(1){
    if (i < n){  //{вниз}
		i++;
		k++;
		a[i][j]= k;
	}
	else { 		// {вправо}
		j++; 
		k++;
		a[i][j]= k;
	}
	
	while(i > 1 && j < n) {
		j++;  //{диагональ вверх-лево}
		i--;
		k++;
		a[i][j] = k;
	}

	if (j < n){
		j++; //{вправо}
		k++;
		a[i][j] = k;
	}
	else
		if (i < n){
			i++; //{вниз}
			k++;
			a[i][j] = k;
		}
	while (j > 1 && i < n){
		i++; //{диагональ влево-вниз}
		j--;
		k++;
		a[i][j] = k;
	}
	
	if( i == n && j == n) break;//{конец правый нижний угол}
	}	
	
	for(i=1; i<=n; i++)
		for(j=1; j<=n; j++){
			printf("%6d",a[i][j]);
			if(j==n) printf("\n");
		}		
	return 0;
}


 
 



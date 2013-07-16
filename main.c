#include <stdio.h>
#include <algorithm>

using namespace std;

int a[100][3], n;

void chng(int s, int e)
{
	int tmp;
	for(int i=0;i<3;i++)
	{
		tmp=a[s][i];
		a[s][i]=a[e][i];
		a[e][i]=tmp;
	}
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int i, j;
    
    scanf ("%d", &n);
	
    for (i = 0; i < n ; i++) 
		for (j=0;j<3; j++)
			scanf ("%d", &a[i][j]);
    
    for (i = 0; i < n-1 ; i++)
    { 
		for (j=i+1;j<n; j++)
		{
			if(a[i][0]>a[j][0])
				chng(i,j);
			if(a[i][0]==a[j][0])
			{
				if(a[i][1]>a[j][1])
					chng(i,j);
			    if(a[i][1]==a[j][1])
			    {
					if(a[i][2]>a[j][2])
						chng(i,j);
				}	
			}
		}  
    }
    
    for (i = 0; i < n ; i++){ 
		for (j=0;j<3; j++)printf("%d ", a[i][j]);
		printf("\n");
    }
    return 0;
}

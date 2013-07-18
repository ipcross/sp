#include <stdio.h>
#include <algorithm>

using namespace std;

long a[100000];

static int cmp(const void *pa, const void *pb)
{
	long a = * (long *) pa, b = * (long *) pb;
	return a - b;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int n=0, i;
    while(scanf ("%ld", &a[n])==1) n++;
    
    qsort(a,n,sizeof(long),cmp);
    
    long d=a[1]-a[0];
    
    for (i = 2; i < n ; i++)
    {
		if(a[i]-a[i-1]==d)
		{
			if(i==n-1)
			{ 
				printf("Yes");
				return 0;
			}
		}
		else break;
	}
	
	printf("No");
	
    return 0;
}

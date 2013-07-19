#include <stdio.h>
#include <algorithm>

using namespace std;

long *a, *b, n;

static int cmp(const void *pa, const void *pb)
{
	long a = * (long *) pa, b = * (long *) pb;
	return a - b;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int i;
    long dist=1000000000, x, y, tmp;
    
    scanf ("%ld", &n);
    
    a = new long[n];
    b = new long[n];

    for(i=0;i<n;i++)
	{
		scanf ("%ld", &a[i]);
		b[i]=a[i];
	}
	
    qsort(a,n,sizeof(long),cmp);
        
    for(i=0;i<n-1;i++)
    {
		tmp=abs(a[i]-a[i+1]);
		if(tmp<dist)
		{
			dist=abs(a[i]-a[i+1]);
			if(a[i]>a[i+1])
			{
				x=a[i+1];
				y=a[i];
			}
			else
			{
				x=a[i];
				y=a[i+1];
			}
		}
	}
    printf("%ld\n", dist);

	for(i=0;i<n;i++)
		if(b[i]==x)printf("%ld ", i+1);

	for(i=0;i<n;i++)
		if(b[i]==y)printf("%ld ", i+1);	
		
    return 0;
}

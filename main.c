#include <stdio.h>
#include <algorithm>
#include <math.h>

using namespace std;

int *a, n;
char **s;
long double *gr;

void chng(int t, int e)
{
	int tmp;
	char *st;
	long double grt;
	
	tmp=a[t];
	a[t]=a[e];
	a[e]=tmp;

	st=s[t];
	s[t]=s[e];
	s[e]=st;
	
	grt=gr[t];
	gr[t]=gr[e];
	gr[e]=grt;	
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int i, j;
    char tmp[10];
    
    scanf ("%d", &n);
	s = new char*[n];
	a = new int[n];
	gr = new long double[n];
	
    for (i = 0; i < n ; i++) 
	{
		s[i] = new char[5];
		scanf ("%d%s", &a[i],s[i]);
		if(s[i][0]=='m')
		{	
			if(s[i][1]=='g') gr[i]=a[i]/1000;
			if(s[i][1]=='p') gr[i]=16380*a[i]/1000;
			if(s[i][1]=='t') gr[i]=powl(10,3)*a[i];
		}
		if(s[i][0]=='k')
		{	
			if(s[i][1]=='g') gr[i]=pow(10,3)*a[i];
			if(s[i][1]=='p') gr[i]=pow(10,3)*16380*a[i];
			if(s[i][1]=='t') gr[i]=powl(10,9)*a[i];
		}
		if(s[i][0]=='M')
		{	
			if(s[i][1]=='g') gr[i]=pow(10,6)*a[i];
			if(s[i][1]=='p') gr[i]=pow(10,6)*16380*a[i];
			if(s[i][1]=='t') gr[i]=powl(10,12)*a[i];
		}
		if(s[i][0]=='G')
		{	
			if(s[i][1]=='g') gr[i]=pow(10,9)*a[i];
			if(s[i][1]=='p') gr[i]=pow(10,9)*16380*a[i];
			if(s[i][1]=='t') gr[i]=powl(10,15)*a[i];
		}
		
		if(s[i][0]=='g') gr[i]=a[i];
		if(s[i][0]=='p') gr[i]=16380*a[i];
		if(s[i][0]=='t') gr[i]=powl(10,6)*a[i];
	}

	for (i = 1; i < n ; i++)
		for (j=n-1;j>=i; j--)
			if(gr[j-1]>gr[j]) chng(j-1,j);
			
    for (i = 0; i < n ; i++)
		printf("%d %s\n" , a[i], s[i]);

    return 0;
}

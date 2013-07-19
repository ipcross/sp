#include <stdio.h>
#include <algorithm>
#include <math.h>

using namespace std;

int *a, n;
char **s;
long long *gr;

void chng(int t, int e)
{
	int tmp;
	char *st;
	long long grt;
	
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
	gr = new long long[n];
	
    for (i = 0; i < n ; i++) 
	{
		s[i] = new char[5];
		scanf ("%d%s", &a[i],s[i]);
		if(s[i][0]=='m')
		{	
			if(s[i][1]=='g') gr[i]=a[i];
			if(s[i][1]=='p') gr[i]=16380*a[i];
			if(s[i][1]=='t') pow(10,6)*a[i];
		}
		if(s[i][0]=='k')
		{	
			if(s[i][1]=='g') gr[i]=pow(10,6)*a[i];
			if(s[i][1]=='p') gr[i]=pow(10,6)*16380*a[i];
			if(s[i][1]=='t') pow(10,12)*a[i];
		}
		if(s[i][0]=='M')
		{	
			if(s[i][1]=='g') gr[i]=pow(10,9)*a[i];
			if(s[i][1]=='p') gr[i]=pow(10,9)*16380*a[i];
			if(s[i][1]=='t') pow(10,15)*a[i];
		}
		if(s[i][0]=='G')
		{	
			if(s[i][1]=='g') gr[i]=pow(10,12)*a[i];
			if(s[i][1]=='p') gr[i]=pow(10,12)*16380*a[i];
			if(s[i][1]=='t') pow(10,18)*a[i];
		}
		
		if(s[i][0]=='g') gr[i]=pow(10,3)*a[i];
		if(s[i][0]=='p')gr[i]=pow(10,3)*16380*a[i];
		if(s[i][0]=='t')gr[i]=pow(10,9)*a[i];
	}

	for (i = 0; i < n-1 ; i++)
		for (j=i+1;j<n; j++)
			if(gr[i]>gr[j]) chng(i,j);
			
    for (i = 0; i < n ; i++)
		printf("%d %s\n" , a[i], s[i]);

    return 0;
}

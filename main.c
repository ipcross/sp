#include <stdio.h>
#include <stdlib.h>

long a,b;

long funmax(long num)
{
	int n,i,j;
	char str[10],tmp;
	if(num<0)num=-num;
	n=sprintf(str, "%ld", num);

	for (i = 0; i < n-1 ; i++)
		for (j=n-1;j>i; j--)
			if(str[j-1]<str[j])
			{
				tmp=str[j-1];
				str[j-1]=str[j];
				str[j]=tmp;
			}
			
	return atoi(str);
}

long funmin(long num)
{
	int n,i,j;
	char str[10],tmp;
	if(num<0)num=-num;
	n=sprintf(str, "%ld", num);
		
	for (i = 0; i < n-1 ; i++)
		for (j=n-1;j>i; j--)
			if(str[j-1]>str[j])
			{
				tmp=str[j-1];
				str[j-1]=str[j];
				str[j]=tmp;
			}
			
	if(str[0]=='0')
		for(i=1;i<n;i++)
			if(str[i]!='0')
			{
				tmp=str[0];
				str[0]=str[i];
				str[i]=tmp;
				break;
			}
		
	return atoi(str);
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    scanf ("%ld%ld", &a,&b);

	if(a>=0)
	{
		if(b>=0) printf("%ld",funmax(a)-funmin(b));
		else printf("%ld",funmax(a)+funmax(b));
	}
	else
	{
		if(b>=0) printf("%ld",-funmin(a)-funmin(b));
		else printf("%ld",-funmin(a)+funmax(b));
	}

    return 0;
}

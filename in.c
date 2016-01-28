#include<stdio.h>
#include<string.h>
int main()
{
	int t,l,i;
	char str[5000000];
	int z[5000000];
	scanf("%s",str);
	l=strlen(str);
	int L = 0, R = 0;
	for (int i = 1; i < l; i++) 
	{
  		if (i > R) 
  		{
    			L = R = i;
   			while (R < l && str[R-L] == str[R]) R++;
    			z[i] = R-L; 
    			R--;
  		}
  		else 
  		{
    			int k = i-L;
    			if (z[k] < R-i+1) 
    				z[i] = z[k];
    			else 
    			{
			      L = i;
			      while (R < l && str[R-L] == str[R]) R++;
			      z[i] = R-L; R--;
			}
		}
	}
	scanf("%d",&t);
	while(t--)
	{
		int q;
		scanf("%d",&q);
		printf("%d\n",z[q]);
	}
	return 0;
}

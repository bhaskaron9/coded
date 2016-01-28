#include<bits/stdc++.h>
using namespace std;
int dis(int x1, int x2, int y1, int y2)
{
	int x,y;
	x=x2-x1;
	y=y2-y1;
	if(x<0)
		x*=-1;
	if(y<0)
		y*=-1;
	return x+y;
}
int newfun(int r, int c, int a, int s, int sn)
{
	int i,j;
	while(sn!=s*s)
	{
		for(i=0; i<s; i++)
		{
			for(j=0; j<s; j++)
			{
				if(mat[i][j]==sn)
				{
					a+=dis(i,r,j,c);
					sn++;
					r=i;
					j=c;
					break;
				}
			}
		}
	}
	return a;
}
int main()
{
	int s, i, j, sn=1, a=0, r, c;
	cin>>s;
	extern int mat[s][s];
	for(i=0; i<s; i++)
	{
		for(j=0; j<s; j++)
		{
			cin>>mat[i][j];	
			if(mat[i][j]==1)
			{
				r=i;
				c=j;
				sn++;	
			}
		}
	}
	cout<<newfun(mat,r,c,0,s,sn);	
	return 0;
}

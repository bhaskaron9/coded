#include<bits/stdc++.h>
using namespace std;
int bits(int no)
{
	int a=2,ret=1;
	while(no>=a)
	{
		a*=2;
		ret++;
	}
	return ret;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,i,j;
		scanf("%d %d",&n,&k);
		int arr[n];
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
		int max=arr[0];
		for(i=1;i<n;i++)
			if(arr[i]>max)
				max=arr[i];
		int bit=bits(max);
		int bitmask[max][bit]={0};
		for(i=0;i<n;i++)
		{
			int a=arr[i];
			for(j=bits(arr[i]);a!=0;j--)
			{
				bitmask[arr[i]][j]=a%2;
				a/=2;
			}
			
		}
		for(i=0;i<=max;i++)
		{
			for(j=0;j<bit;j++)
			 	cout<<bitmask[i][j];
			 cout<<endl;
		}
			
		
		
	}
	return 0;

}

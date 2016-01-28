#include<bits/stdc++.h>

using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m,i,c=0;
		scanf("%d",&n);//
		scanf("%d",&m);//
		int a;
		vector <int> vec;
		for(i=0; i<m; i++)
		{
				scanf("%d",&a);
				vec.push_back(a);
		}
		sort(vec.begin(),vec.end());
		if(vec[m-1]==1)
		{
			cout<<m/2<<endl;
		//	break;
		}
		else
		{
			for(i=0;i<m;i++)
			{
				if(vec[i]==m-i-2-c)
				{	
					c+=vec[i];
					break;
				}
				else if(vec[i]>m-i-2-c)
				{
					c+=m-i-2-c+1;
					break;
				}
				else
					c+=vec[i];
			}
			cout<<c<<endl;
		}
	}
	return 0;
}

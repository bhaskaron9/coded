#include<bits/stdc++.h>//
using namespace std;//
vector <pair <int, pair<int,int> > > xoropr;//
void maXor(int pos,int arr[],int n)//
{//
	int max=0,till=0,i,sec;//
	for(i=pos;i<n;i++)//
	{//
		till=till^arr[i];//
		if(till>max)
		{
			max=till;
			sec=i;
		}
	}//
	xoropr.push_back(make_pair(max,make_pair(pos,sec)));//
}//
int main()//
{//
	int n,j;//
	scanf("%d",&n);//
	int i,a[n];//
	for(i=0;i<n;i++)//
		scanf("%d",&a[i]);//
	for(i=0;i<n;i++)//	
		maXor(i,a,n);//
	sort(xoropr.begin(),xoropr.end());//
	
	if(xoropr[n-1].second.second!=xoropr[n-2].second.second)//
		printf("%d",xoropr[n-1].first+xoropr[n-2].first);//
	else if(xoropr[n-1].second.second==xoropr[n-2].second.second&&xoropr[n-1].second.first!=xoropr[n-2].second.first)//
		printf("%d",xoropr[n-1].first+xoropr[n-2].first);//
	else 
		printf("%d",xoropr[n-1].first+xoropr[n-3].first);//	
	return 0;//
}//

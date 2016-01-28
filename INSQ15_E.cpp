#include<bits/stdc++.h>
using namespace std;
template<typename P> struct Cmp

{

    bool operator()(const P &p1, const P &p2)

    {

        if(p1.first < p2.first) return true;

        if(p1.first == p2.first) return p1.second>  p2.second;

        return false;

    }

};
vector<pair<long long int, int> > vec;
int main()
{
	int t,n,i;
	long long int s,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld %lld",&s,&m);
		vec.push_back(make_pair(s*m,i+1));
	}
	sort(vec.begin(), vec.end(), Cmp<pair<int, int> >());
	scanf("%d",&t);
	while(t--)
	{
		int k;
		scanf("%d",&k);
		printf("%d\n",vec[n-k].second);
	}
	return 0;

}

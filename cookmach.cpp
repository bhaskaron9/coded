#include<bits/stdc++.h>//
using namespace std;//
int maxm(int a,int b)//
{//
	if(a>b)//
		return a;//
	return b;//
}//
int main()//
{//
	int t;//
	cin>>t;//
	while(t--)//
	{//
		//Your Program here
		long long int a,b,c=0,max;//
		cin>>a>>b;//
		max=maxm(a,b);//
		while(a!=b)//
		{//
			if(a==max)//
			{//
				a/=2;//
				c++;//
			}//
			else if(b==max)//
			{//
				b/=2;//
				c++;//
			}//
			max=maxm(a,b);//
		}//
		cout<<c<<endl;
	}//
	return 0;//
//
}//

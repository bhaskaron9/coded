#include<bits/stdc++.h>//
using namespace std;//
int minm(int a,int b)//
{//
	if(a<b)//
		return a;//
	return b;//
}//
int move(char first[], char next[], int pos, int jump, int l)//
{// 
    if(pos==(l-1))//
        return jump;//
    if(first[pos+1]=='.')//
        return move(first,next,pos+1,jump,l);//
    else if(next[pos+1]=='.')//
        return move(next,first,pos+1,jump+1,l);//
    return 200007;//
}//
int main()//
{//
	int t;//
	cin>>t;//
	while(t--)//
	{//
		//Your Program here
		char a[200007],b[200007];//
		cin>>a>>b;//
		int aans=200007,bans=200007,ans;//
		if(a[0]=='.')//
            		aans=move(a,b,0,0,strlen(a));//
		if(b[0]=='.')//
		{//
		        bans=move(b,a,0,0,strlen(a));//
		}//
		ans=minm(aans,bans);//
		if(ans==200007)//
		    cout<<"No"<<endl;//
		else//
		    cout<<"Yes\n"<<ans<<endl;//
	}//
	return 0;//
//
}//

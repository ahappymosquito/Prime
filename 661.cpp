#include<iostream>

const int N=100;
int prime[N];

int tprime[N];


int main()
{
	for(int i=2;i<=N/i;i++)
	{
		if(prime[i]==0)
		{
			for(int j=i*i;j<=N;j+=i)
			{
				prime[j]=1;
			}
		}
	}
//	for(int i=2;i<=N;i++)
//	{
//		if(prime[N]==0) tprime[++tprime[0]]=i;
//		for(int j=1;i*tprime[j]<=N;j++)
//		{
//			prime[i*tprime[j]]=1;
//			if(i%tprime[j]==0) break;
//		}
//	}
	
	
	for(int i=2;i<=N;i++)
	{
		if(prime[i]==0)
		{
			std::cout << i<<std::endl;
		}
	}
	return 0;
}

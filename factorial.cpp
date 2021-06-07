#include<bits/stdc++.h>
using namespace std;
int dp[1000000];
int factorial(int num)
{
	if(num<=1)
	{
		return 1;
	}
	if(dp[num]!=-1)
	{
		return dp[num];
	}
	return dp[num]=num*factorial(num-1);
}
int main()
{
	int num;
	cout<<"Enter a number to find its factorial: ";
	cin>>num;
	for(int i=0;i<=num;i++)
	{
		dp[i]=-1;
	}
	cout<<factorial(num);
	return 0;
}

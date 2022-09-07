#include<iostream>
using namespace std;
int mfib(int n)
{
	int f[10];
	if(n<=1)
	{
		f[n]=n;
		return n;
	}
	else 
	{
		if(f[n-2]==-1)
		f[n-2]=mfib(n-2);
		if(f[n-1]==-1)
		f[n-1]=mfib(n-1);
		return f[n-2]+f[n-1];
	}
}
int main()
{
	int f[10];
	int i;
	for(i=0;i<10;i++)
	{
		f[i]=-1;
	}
	cout<<mfib(6);
	return 0;
}
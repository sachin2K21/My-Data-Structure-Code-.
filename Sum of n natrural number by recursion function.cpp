#include<iostream>
using namespace std;
int sum(int n)
{
	if(n==0)
	return 0;
	else
	return sum(n-1)+n;
}
int main()
{
	int n=10;
	cout<<sum(10);
	return 0;
}

// by loop method

//#include<iostream>
//using namespace std;
//int main()
//{
//	int i,sum=0,n;
//	cout<<"Enter the n natural number"<<endl;
//	cin>>n;
//	for(i=1;i<=n;i++)
//	{
//		sum=sum+i;
//	}
//	cout<<sum;
//}
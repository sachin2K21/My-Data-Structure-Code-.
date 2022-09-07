#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==0)
	return 1;
	else 
	return fact(n-1)*n;
}
int main()
{
	int x=5;
	cout<<fact(x);
	return 0;
}


// by loop method

//#include<iostream>
//using namespace std;
//int main()
//{
//	int fact=1,i,n;
//	cout<<"enter the number"<<endl;
//	cin>>n;
//	for(i=1;i<=n;i++)
//	{
//		fact=fact*i;
//	}
	// cout<<fact;
}
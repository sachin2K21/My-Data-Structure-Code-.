// By iterative Version METHOD

//
//#include<iostream>
//using namespace std;
//double e(int x,int n)
//{
//	double s=1;
//    int i;
//	for(i=1;i<=n;n--)
//	{
//		s=1+x*s/n;
//		
//	}
//	return s;
//}


// By Recursive Version Method

#include<iostream>
using namespace std;
double e(int x,int n)
{
	static double s;
	if(n==0)
	return s;
	s= 1+x*s/n;
	return e(x,n-1);
}
int main()
{
	cout<<e(1,10);
	return 0;
}

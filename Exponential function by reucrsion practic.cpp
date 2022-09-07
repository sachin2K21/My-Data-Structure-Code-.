#include<iostream>
using namespace std;
static double s;
 double e(int x,int n)
{
	if(n==0)
	
		return s;
		s=1+s*x/n;
		return e(x,n-1);
	
}
int main()
{
	cout<<e(1,10);
	return 0;
}
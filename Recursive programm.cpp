#include<iostream>
using namespace std;
int fun1(int n)
{
	if(n>0)
	{
		fun1(n-1);
		cout<<n;
		
	}
	
}
int main()
{
	int x=3;
	fun1(3);
}

//int fun2(int n)
//{
//	if(n>0)
//	{
//		cout<<n;
//		fun2(n-1);
//	}
//}
//int main()
//{
//	int x=3;
//	fun2(x);
//}
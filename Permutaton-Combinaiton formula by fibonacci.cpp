#include<iostream>
using namespace std;
//int fact(int n)
//{
//	if(n==0)
//	return 1;
//	else
//	return fact(n-1)*n;
//}
//int nCr(int n,int r)
//{
//	int num,den;
//	num=fact(n);
//	den=fact(n-r)*fact(r);
//	return num/den;
//}
//int main()
//{
//	cout<<nCr(5,1);
//	return 0;
//}

// 2nd method by Pascal's technique
int nCr(int n,int r)
{
	if(r==0 || n==r)
	return 1;
	else 
	return nCr(n-1,r-1)+nCr(n-1,r);
}
int main()
{
	cout<<nCr(5,1);
	return 0;
}
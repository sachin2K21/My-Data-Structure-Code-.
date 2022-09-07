#include<iostream>
using namespace std;
int pow(int exp,int n)
{
	if(n==0)
	return 1;
	else 
	return exp*pow(exp,n-1);
}
int fact(int n)
{
	if(n==0)
	return 1;
	else
	return n*fact(n-1);
}

int exponential(int exp,int n)
{
	int sum;
	if(n==0)
	return 1;
	else
    return sum = (pow(exp,n-1))/(fact(n));
   	return sum;
}
int main()
{
	int exp=2.78;
	int y=4;
	cout<<exponential(exp,y);
	return 0;
}
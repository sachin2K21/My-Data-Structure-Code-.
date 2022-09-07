#include<iostream>
using namespace std;
int main()
{
	int A[5]={1,2,3,4,5};
	int *p;
	int i;
	p=new int[5];
	p[0]=2;
	p[1]=3;
	p[2]=4;
	p[3]=5;
	p[4]=6;
	for(i=0;i<5;i++)
	{
		cout<<A[i]<<" ";
	}
	cout<<endl;
	for(i=0;i<5;i++)
	{
		cout<<p[i]<<" ";
	}
	delete []p;
	return 0;
	
}
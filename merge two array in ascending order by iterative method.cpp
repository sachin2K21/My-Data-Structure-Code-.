#include<iostream>
using namespace std;
int main()
{
	int A[5]={2,3,5,6,7};
	int B[5]={9,10,12,30,40};
	int *C[10];
	int i,j;
	C=new int[10];
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(A[i]>B[j])
			C[i]=A[i];
			else C[i]=B[j];
		}
		cout<<&C[i];
	}
	
	return 0;
}
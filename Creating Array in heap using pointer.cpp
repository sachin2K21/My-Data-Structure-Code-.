#include<iostream>
using namespace std;
int main()
{
	int A[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};
	int *B[3];
	int **C;
	int i,j;
		for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<A[i][j]<<" ";
	
		}
	cout<<endl;
	}
	B[0]=new int[4];
	B[1]=new int[4];
	B[2]=new int[4];
		for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<B[i][j]<<" ";
	
		}
			cout<<endl;
	}
	cout<<endl;
	C=new int*[3];
	C[0]=new int[4];
	C[1]=new int[4];
	C[2]=new int[4];

	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<C[i][j]<<" ";
	
		}
			cout<<endl;
	}
	
}
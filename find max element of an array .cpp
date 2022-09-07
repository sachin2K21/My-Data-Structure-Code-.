#include<iostream>
using namespace std;
int main()
{
	int A[10]={2,3,4,5,64,34,12,45,65,2};
	int i,max;
	for(i=0;i<10;i++)
	{
	
	if(A[i]>A[i+1])
	{
		max=A[i];
	}

	
}
cout<<max;
	
	return 0;
}


// For min element of an array
//int main()
//{
//	int A[10]={2,3,4,5,64,34,12,45,65,2};
//	int i,min;
//for(i=0;i<10;i++)
//{
//	if(A[i]<A[i+1])
//	{
//		min=A[i];
//	}
//	
//}
//cout<<min;
//return 0;
//}
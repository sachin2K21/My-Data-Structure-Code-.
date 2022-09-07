#include<iostream>
using namespace std;
int main()
{
	int i,j;
	char A[]="madam";
	char B[7];
	cout<<A<<endl;
	
	char t;
	for(j=0;A[j]!='\0';j++)
	{
		
	}
	j=j-1;
	for(i=0;i<j;i++,j--)
	{
		t=A[i];
		A[i]=A[j];
		A[j]=t;
	}
	cout<<A<<endl;
//	for(i=0;A[i]!='\0';i++)
//	{
//	}
//	i=i-1;
//	for(j=0;B[j]!='\0';j++)
//	{
//		B[j]=A[i];
//	}
//	B[j]='\0';
//	
//	cout<<B<<endl;
	
	for(i=0,j=0; A[i]!='\0' && A[j]!='\0';i++,j++)
	{
	}
		if(A[i]==A[j])
		cout<<"It's pelindrom";
		else 
		cout<<"It's not pelindrom";

	return 0;
}
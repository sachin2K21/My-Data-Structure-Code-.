#include<iostream>
using namespace std;
//void permutation(char s[],int l,int h)
//{
//	int i;
//	if(l==h)
//	{
//		cout<<s<<endl;
//		
//	}
//	else
//	{
//		for(i=l;i<=h;i++)
//		{
//			swap(s[l],s[i]);
//			permutation(s,l+1,h);
//			swap(s[l],s[i]);
//		}
//	}
//}
//int main()
//{
//	char s[]="ABC";
//	permutation(s,0,2);
//	return 0;
//}


// 2nd method
void permutation(char s[],int k)
{
	static int A[10]={0};
	static char result[10];
	int i;
	if(s[k]=='\0')
	{
		result[k]='\0';
		cout<<result;
	}
	else
	{
		for(i=0;i<'\0';i++)
		{
		if(A[i]==0)
    	{
		result[k]=s[i];
		A[i]=1;
		permutation(s,k+1);
		A[i]=0;
      	}
      }
   }
 }
int main()
{
	char s[]="ABC";
	permutation(s,0);
}
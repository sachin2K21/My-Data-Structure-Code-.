#include<iostream>
using namespace std;
void TOH(int n,int A,int B,int C)
{
	if(n>0)
	{
	
	TOH(n-1,A,C,B);
	cout<<"("<<	A<<","<<C<<")"<<",";
    TOH(n-1,B,A,C);
}}
int main()
{
	cout<<"Steps to Move disc form A to D are ";
	TOH(3,1,2,3);
   return 0;
}
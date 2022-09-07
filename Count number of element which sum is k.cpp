#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution
{
int	LenOfLongSubArray(int A[],int n,int k)
	{
		int s=0;
		int ans=0;
		int j;
		int i=0;
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				int sum=0;
				for(int l=i;l<=j;l++)
				{
						sum=sum+A[l];
				}
				if(sum==k)
				ans=max(ans,j-i+1);
			}
		}
		return ans;
	}
};
int main()
{
	
int A;
	 Solution LenOfLongSubArray(A,6,14);
		A[6]={2,3,4,5,6,8};

}
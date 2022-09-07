#include<iostream>
using namespace std;	
    int fib(int n)
    {
    	int f[n];
            f[0]=0;
            f[1]=1;
            if(n>=2)
            {
            		return f[n-1]+f[n-2];
			}
			else
			{
				return f[n];
			}
	}
 int main()
 {
 	int x=3;
 	cout<<f(x);
 	return 0;
 }

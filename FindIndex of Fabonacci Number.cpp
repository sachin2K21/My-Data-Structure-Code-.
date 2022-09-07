/*****************************************************************************
                             // To find index if fabonacci Number

*******************************************************************************/

#include <iostream>

using namespace std;
int findindex(int n)
{
   int a=0,b=1,c;
   int res=1;
   
   if(n<=1)
   return n;
 while(c<n)
   {
       c=a+b;
       res++;
       a=b;
       b=c;
   }
    return res;
}
int main()
{
    int x=findindex(13);
    cout<<x;
    return 0;
}

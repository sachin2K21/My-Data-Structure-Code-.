//#include<iostream>
//using namespace std;
//int fun(int n)
//{
//  if(n>0)
//  {
//  	return fun(n-1)+n;
//	  }	
//	  return 0;
//}
//int main()
//{
//	int x=5;
//	fun(x);
//	cout<<fun(x);
//}






// Static Variebles use in Recusion

#include<iostream>
using namespace std;
int fun(int n)
{
	 static int y=0;
  if(n>0)
  {
 
  	y++;
  	return fun(n-1)+y;
	  }	
	  return 0;
}
int main()
{
	int x=5;
	cout<<fun(x);
}





// Global Variables use in Recursion

//#include<iostream>
//using namespace std;
//int y=0;
//int fun(int n)
//{
//	 
//  if(n>0)
//  {
// 
//  	y++;
//  	return fun(n-1)+y;
//	  }	
//	  return 0;
//}
//int main()
//{
//	int a;
//	a=fun(5);
//	cout<<a;
//}
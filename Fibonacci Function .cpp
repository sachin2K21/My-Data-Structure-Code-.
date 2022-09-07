//fibonacci Function by iterative Method for diplaying all array in one result

//#include<iostream>
//using namespace std;
//void fib(int n)
//{
//	int f[n];
//	 f[0]=0;
//	 f[1]=1;
//	int i;
//	for(i=2;i<n;i++)
//	{
//		f[i]=f[i-1]+f[i-2];
//	}
//  for(i=0;i<n;i++)
//  {
//  	cout<<f[i]<<" ";
//  }
//}
//int main()
//{
//int x=10;
//fib(x);
//return 0;
//}

// Fibonacci Function by Recursion Method for displaying particular index value

//#include<iostream>
//using namespace std;
//int fib(int n)
//{
//	if(n<=1)
//	return n;
//	return fib(n-1)+fib(n-2);
//}
//int main()
//{
//	int x=6;
//	cout<<fib(x);
//	return 0;
//}



//Fibonacci Function by iterative method for diplaying particular array index value

//#include <iostream>
//using namespace std;
//
//int main() {
//    int n, t1 = 0, t2 = 1, nextTerm = 0;
//
//    cout << "Enter the number of terms: ";
//    cin >> n;
//
//    cout << "Fibonacci Series: ";
//
//    for (int i = 1; i <= n; ++i) {
//        // Prints the first two terms.
//        if(i == 1) {
//            cout << t1 << ", ";
//            continue;
//        }
//        if(i == 2) {
//            cout << t2 << ", ";
//            continue;
//        }
//        nextTerm = t1 + t2;
//        t1 = t2;
//        t2 = nextTerm;
//        
//        cout << nextTerm << ", ";
//    }
//    return 0;
//}


// Iterative method-2

#include<iostream>
using namespace std;
int fib(int n)
{
	int t0=0;
	int t1=1;
	int s=0;
	int i;
	if(n<=1)
	return n;
	for(i=2;i<=n;i++)
	{
		s=t0+t1;
		t0=t1;
		t1=s;
	}
	return s;
}
int main()
{
	cout<<fib(10);
	return 0;
}
// Bakwas method which is not working

//#include<iostream>
//using namespace std;
//int fib(int n)
//{
//	int f[n];
//	f[0]=0;
//	f[1]=1;
//	if(n<=1)
//	return n;
//	else
//	return f[n-1]+f[n-2];
//}
//int main()
//{
//	int x=3;
//	cout<<fib(x);
//	return 0;
//}
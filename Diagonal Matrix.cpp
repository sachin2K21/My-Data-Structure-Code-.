#include<iostream>
using namespace std;
struct Matrix
{
	int A[10];
	int n;
};

void set(struct Matrix *m,int i,int j,int x)
{
	if(i==j)
	m->A[i-1]=x;
	
}
int get(struct Matrix m,int i,int j)
{
	if(i==j)
	return m.A[i-1];
	else 
	return 0;
}
int display(struct Matrix m)
{
	for(int i=0;i<m.n;i++)
	{
		for(int j=0;j<m.n;j++)
		{
			if(i==j)
			cout<<m.A[i]<<" ";
			else 
			cout<<"0"<<" ";
		}
		cout<<endl;
	}
}
	
int main()
{
	struct Matrix m;
	m.n=4;
	set(&m,1,1,5);
	set(&m,2,2,3);
	set(&m,3,3,9);
	set(&m,4,2,12);
	display(m);
	return 0;
}



// 2nd methd using class
//#include<iostream>
//using namespace std;
//class diagonal
//{
//	private:
//		int *A;
//		int n;
//		public:
//			diagonal()
//			{
//				n=2;
//				A=new int[2];
//			}
//			diagonal(int n)
//			{
//				this->n=n;
//				A=new int[n];
//			}
//			~diagonal()
//			{
//				delete []A;
//			}
//			void set(int i,int j,int x);
//			int get(int i,int j);
//			void display();
//			
//};
//void diagonal::set(int i,int j,int x)
//{
//	if(i==j)
//	A[i-1]=x;
//}
//int diagonal::get(int i,int j)
//{
//	if(i==j)
//	return A[i-1];
//	else
//	return 0;
//}
//void diagonal::display()
//{
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			if(i==j)
//			cout<<A[i]<<" ";
//			else 
//			cout<<"0"<<" ";
//		}
//		cout<<endl;
//	}
//}
//int main()
//{
//	diagonal d(4);
//	d.set(1,1,5);
//	d.set(2,2,8);
//	d.set(3,3,9);
//	d.set(4,4,12);
//	d.display();
//	return 0;
//}
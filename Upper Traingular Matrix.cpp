// Upper triangular matrix
#include<iostream>
using namespace std;
class Uptri
{
	private:
		int n;
		int *A;
		public:
			Uptri()
			{
				int n=2;
				A=new int[2*(2+1)/2];
			}
			Uptri(int n)
			{
				this->n=n;
				A=new int[n*(n+1)/2];
			}
			~Uptri()
			{
				delete []A;
			}
			void set(int i,int j,int x);
			int get(int i,int j);
			void display();
			int getDimension()
			{
				return n;
			}
};
void Uptri::set(int i,int j,int x)
{
	if(i<=j)
	A[j*(j-1)/2+i-1]=x;
}
int Uptri::get(int i,int j)
{
	if(i<=j)
    return A[j*(j-1)/2+j-1];
	else 
	return 0;
}
void Uptri::display()
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i<=j)
			cout<<A[j*(j-1)/2+i-1]<<" ";
			else
			cout<<"0"<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	int d;
	cout<<"Enter Dimension"<<endl;
	cin>>d;
	Uptri up(d);
	int x;
	cout<<"All Emelements are "<<endl;
	for(int i=1;i<=d;i++)
	{
		for(int j=1;j<=d;j++)
		{
			cin>>d;
			up.set(i,j,x);
		}
	}
	cout<<endl;
	up.display();
}
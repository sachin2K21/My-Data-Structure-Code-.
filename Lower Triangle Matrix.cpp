#include<iostream>
//#include<st>
using namespace std;
class LowerMatrix
{
	int *A;
	int n;
	public:
		
	LowerMatrix()
	{
		int n=2;
		A=new int[2*(2+1)/2];
	}
	LowerMatrix(int n)
	{
		this->n=n;
		A=new int[n*(n+1)/2];
	}
	~LowerMatrix()
	{
		delete []A;
	}
	void set(int i, int j, int x);
	int get(int i, int j);
	void display();
	int getDimension(){return n;
	}
};

void LowerMatrix::set(int i,int j, int x)
{
 	if(i>=j)
 	A[i*(i-1)/2+j-1]=x;	
}
int LowerMatrix::get(int i,int j)
{
	if(i>=j)
	return A[i*(i-1)/2+j-1];
	return 0;
}
void LowerMatrix::display()
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i>=j)
			cout<<A[i*(i-1)/2+j-1];
			else 
			cout<<"0";
		}
		cout<<endl;
	}
}
int main()
{
int d;
cout<<"Enter Dimension"<<endl;
cin>>d;
LowerMatrix LM(d);
	int x;
	cout<<"Enter All Elements"<<endl;
	for(int i=1;i<=d;i++)
	{
		for(int j=1;j<=d;j++)
		{
			cin>>x;
			LM.set(i,j,x);
		}
		}	
		cout<<endl;
		LM.display();
}

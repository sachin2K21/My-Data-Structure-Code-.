#include<iostream>
using namespace std;
class Array 
{
	private:
	int A[10];
	int length;
	int size;
	public:
		Array()
		{
		int *A;	
		int	size=10;
		int	length=0;
		A=new int[size];
		}
		Array(int sz)
		{
			int *A;	
			size=sz;
			length=0;
			A=new int[size];
		}
		~Array()
		{
			delete []A;
		}
		void display(Array *arr2,Array *arr3);
		void Union(Array *arr2);
		
};
void Array::display(Array *arr2,Array *arr3)
{
	cout<<"Elmenets are "<<endl;
	for(int i=0;i<length;i++)
	{
		cout<<A[i]<<",";
	}
	for(int j=0;j<arr2->length;j++)
	{
		cout<<arr2->A[j]<<",";
	}
	for(int k=0;k<arr3->length;k++)
	{
		cout<<arr3->A[k]<<",";
	}
}
void Array::Union(Array *arr2)
{
	int i,j,k;
	i=j=k=0;
 Array *arr3=new  Array[length+arr2->length];
	while(i<length && j<arr2->length)
	{
		if(A[i]<arr2->A[j])
		arr3->A[k++]=A[i++];
		else if(arr2->A[j]<A[i])
		arr3->A[k++]=arr2->A[j++];
		else
		{
			arr3->A[k++]=arr3->A[i++];
			j++;
		}
		for(;i<length;i++)
		arr3->A[k++]=A[i];
		for(;j<arr2->length;j++)
		arr3->A[k++]=arr2->A[j];
		arr3->length=k;
		arr3->size=10;
		return ;
	}
}
	
	int main()
	{
		 Array arr1={{2,6,10,15,25},10,5};
	     Array arr2={{3,6,7,15,20},10,5};
		 Array arr3;
		arr3=Union(&arr1,&arr2);
		display(*arr3);
		return 0;
	}
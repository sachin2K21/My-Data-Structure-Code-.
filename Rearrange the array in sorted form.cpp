#include<iostream>
using namespace std;
struct Array
{
	int A[10];
	int length;
	int size;
};
void display(struct Array arr)
{
	cout<<"elements are ";
	for (int i=0;i<arr.length;i++)
	{
		cout<<arr.A[i]<<",";
	}
}
void InsertSort(struct Array *arr,int x)
{
	int i=arr->length-1;
	if(arr->length==arr->size)
	return;
	while( i>=0 && arr->A[i]>x )
	{
		arr->A[i+1]=arr->A[i];
		i--;
	}
	arr->A[i+1]=x;
	arr->length++;
}
int main()
{
	struct Array arr={{2,3,5,10,15},10,5};
	InsertSort(&arr,4);
	display(arr);
}
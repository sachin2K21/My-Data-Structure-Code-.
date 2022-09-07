#include<iostream>
using namespace std;
struct Array
{
	int A[10];
	int length;
	int size;
	
};
void display(struct Array *arr)
{
	cout<<"Elements are ";
	for(int i=0;i<arr->length;i++)
	{
		cout<<arr->A[i]<<",";
	}
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void Rearrange(struct Array *arr)
{
	int i,j;
	i=0;
	j=arr->length-1;
	while(i<j)
	{
		if(arr->A[i]<0)
		i++;
		if(arr->A[j]>=0)
		j--;
		if(i<j)
		swap(&arr->A[i],&arr->A[j]);	
	}
}
int main()
{
	struct Array arr={{-2,3,-4,-5,4,3,2,5,-5},10,9};
	Rearrange(&arr);
	display(&arr);
	
}
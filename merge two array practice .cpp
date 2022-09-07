#include<iostream>
using namespace std;
struct Array
{
	int *A[10];
//	int B[10];
	int length;
	int size;
};

struct Array* merge(struct Array *arr1,struct Array *arr2)
{
	int i,j,k;
	i=j=k=0;
	struct Array** arr3= new struct Array*[10];
	
	while(i<arr1->length && j<arr2->length)
	{
		if(arr1->A[i]<arr2->A[j])
		arr3->A[k++]=arr1->A[i++];
//		k++;
//		i++;
		else
		arr3->A[k++]=arr2->A[j++];
//		K++;
//		J++;
		for(;i<arr1->length;i++)
		{
			arr3->A[k]=arr1->A[i];
			k++;
		}
		for(;j<arr2->length;j++)
		{
			arr3->A[k]=arr2->A[j];
			k++;
		}
		arr3->length=arr1->length+arr2->length;
		arr3->size=10;
		
	}
	return arr3;
	
	
}


int main()
{
	struct Array arr1={{2,3,4,5,7},10,5};
	struct Array arr2={{4,5,7,23,8},10,5};
	struct Array *arr3;
	arr3=merge(&arr1,&arr2);
	display(&arr3);
}
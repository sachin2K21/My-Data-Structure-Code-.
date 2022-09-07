#include<iostream>
using namespace std;
struct Array
{
	int A[10];
	int length;
	int size;	
};
void Display(struct Array arr)
{
	cout<<"Elements are ";
	for(int i=0;i<arr.length;i++)
	{
		cout<<arr.A[i]<<" ";
	}
}
int Get(struct Array arr,int index)
{
	if(index>=0 && index<arr.length)
	return arr.A[index];
}
int Set(struct Array *arr,int index,int x)
{
	if(index>=0 && index<arr->length)
	arr->A[index]=x;
}
int Max(struct Array arr)
{
	int max;
	max=arr.A[0];
	for(int i=1;i<arr.length;i++)
	{
		if(arr.A[i]>max)
		max=arr.A[i];
	}
	return max;
}
int Min(struct Array arr)
{
	int min;
	min=arr.A[0];
	for(int i=1;i<arr.length;i++)
	{
		if(arr.A[i]<min)
		min=arr.A[i];
	}
	return min;
}
int Sum(struct Array arr)
{
	int total;
	for(int i=0;i<arr.length;i++)
	{
		total=total+arr.A[i];
	}
	return total;
}
float Avg(struct Array arr)
{
	int i,n;
	n=arr.length;
	float total=0;
	for(int i=0;i<arr.length;i++)
	{
		total=total+arr.A[i];
	}
	return total/n;
}
// Sum of element of an Array by Recursive Method
int RSum(struct Array arr,int n)
{
	for(int i=0;i<arr.length;i++)
	{
	if(n<0)
	return 0;
	else
	return RSum(arr,n-1)+arr.A[n];
}
}
//void swap(int *x,int *y)
// {
// int temp=*x;
// *x=*y;
// *y=temp;
// }
int main()
{
	struct Array arr={{2,3,4,5,6,7,8,9,2},10,9};
	Display(arr);
	cout<<Get(arr,5)<<endl;
	cout<<Set(&arr,5,10)<<endl;
	cout<<Sum(arr)<<endl;
	cout<<RSum(arr,arr.length-1)<<endl; 
	cout<<Avg(arr)<<endl;
	cout<<Max(arr)<<endl;
	cout<<Min(arr)<<endl;
 //   cout<<swap(10,19);
	

}


//#include<stdio.h>
//struct Array
//{
// int A[10];
// int size;
// int length;
//};
// void Display(struct Array arr)
// {
// int i;
// printf("\nElements are\n");
// for(i=0;i<arr.length;i++)
// printf("%d ",arr.A[i]);
// }
//void swap(int *x,int *y)
// {
// int temp=*x;
// *x=*y;
// *y=temp;
// }
//int Get(struct Array arr,int index)
//{
// if(index>=0 && index<arr.length)
// return arr.A[index];
// return -1;
//}
//void Set(struct Array *arr,int index,int x)
//{
// if(index>=0 && index<arr->length)
// arr->A[index]=x;
//}
//int Max(struct Array arr)
//{
// int max=arr.A[0];
// int i;
// for(i=1;i<arr.length;i++)
// {
// if(arr.A[i]>max)
// max=arr.A[i];
// }
// return max;
//}
//int Min(struct Array arr)
//{
// int min=arr.A[0];
// int i;
// for(i=1;i<arr.length;i++)
// {
// if(arr.A[i]<min)
// min=arr.A[i];
// }
// return min;
//}
//int Sum(struct Array arr)
//{
// int s=0;
// int i;
// for(i=0;i<arr.length;i++)
// s+=arr.A[i];
// return s;
//}
//float Avg(struct Array arr)
//{
// return (float)Sum(arr)/arr.length;
//}
//int main()
//{
// struct Array arr1={{2,3,9,16,18,21,28,32,35},10,9};
// printf("%d",Sum(arr1));
// Display(arr1);
// return 0;
//}
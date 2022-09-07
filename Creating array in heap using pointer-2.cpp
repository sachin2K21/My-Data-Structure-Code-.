#include<iostream>
using namespace std;
//struct array
//{
//	int *p;
//	int size;
//	int length;
//};
//void display(struct array arr)
//{
//	int i;
//	cout<<"Elements are "<< endl;
//	for(i=0;i<arr.length;i++)
//	{
//		cout<<arr.p[i]<<" ";
//	}
//}
//int main()
//{
//	int n,i;
//	struct array arr;
//	cout<<"Enter the size of an array "<<endl;
//	cin>>arr.size;
//	arr.p=new int[arr.size];
//	arr.length=0;
//	cout<<"Enter the number of Numbers"<<endl;
//	cin>>n;
//	cout<<"Enter all elements "<<endl;
//	for(i=0;i<n;i++)
//	{
//		cout<<arr.p[i]<<endl;
//		arr.length=n;
//		display(arr);
//		return 0;
//	}
//}

// If size and data are given of an array

//struct array
//{
//	int p[20];
//	int size;
//	int length;
//};
//void display(struct array arr)
//{
//	int i;
//	cout<<"Elements are "<<endl;
//	for(i=0;i<arr.size;i++)
//	{
//		cout<<arr.p[i]<<" ";
//	}
//}
//int main()
//{
//	struct array arr={{2,3,4,5,6},20,5};
//	display(arr);
//	return 0;
//}

// 	By using Class we can create this 
class array
{
	private:
		int *p;
		int size;
		int length;
		public:
			array(int size)
			{
				this->size=size;
				p=new int[size];
			}
			void create()
			{
			
		cout<<"Enter no. of elements: "<<flush;
		cin>>length;
		cout<<"Enter the array elements: "<<endl;
		for(int i=0;i<length;i++)
		{
			cout<<"Array Element: "<<i<<"="<<flush;
			cin>>p[i];
		}
			}
			void display()
			{
				for(int i=0;i<length;i++)
				{
					cout<<p[i]<<" ";				}
			}
			~ array()
			{
				delete []p;
				cout<<"Array destroyed"<<endl;
			}
		};
		int main()
		{
			array arr(10);
			arr.create();
			arr.display();
			return 0;
		}
		
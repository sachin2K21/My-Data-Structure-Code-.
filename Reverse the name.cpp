  // Reverse the data of an array
#include<iostream>
#include<string>
using namespace std; 
int main() 
{ 
int A[10]={1,2,3,4,5,6,67,7,89,3};
  //  int arr = A[10]; 
    for(int i=9;i>=0;i--)
    {
    	cout<<A[i]<<",";
	}

    return 0;
}

// Reverse the name using reverse function
#include <algorithm> 
#include<iostream>
#include<string>
using namespace std; 
int main() 
{ 
    string str = "Journal Dev reverse example"; 
    reverse(str.begin(), str.end()); 
	cout<<"\n"<<str; 
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
int *p,*q;
p=new int[5];
q=new int[10];
int i;
p[0]=1,p[1]=4,p[2]=5,p[3]=6,p[4]=3;
for(int i=0;i<5;i++)
q[i]=p[i];

delete p;
p=q;
q=NULL;
for(i=0;i<5;i++)
cout<<p[i]<<" ";
return 0;
}


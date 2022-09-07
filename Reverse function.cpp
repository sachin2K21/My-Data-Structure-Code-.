//#include<iostream>
//// #include<string>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	string str="ayihsehdam nihcas ma I";
//	reverse(str.begin(),str.end());
//	cout<<"\n"<<str;
//	return 0;
//}

// 2nd Method

#include<iostream>
#include<string>
using namespace std; 
int main() 
{ 
    string str="ayihsehdam nihcas ma I"; 
    int i;
    cout<<"Printing string in reverse\n";
    for(i = str.length() - 1; i >= 0; i--)
    {
      	cout<<str[i];
    }
    return 0;
}

 
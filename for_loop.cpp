#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"hpw many fibnoacc number you want to print ?";
	cin>>n;
	int a =0;
	int b =1;
	for(int i =1;i<=n;i++)
	{
		int nextnum = a+b;
		cout<<nextnum<<" ";
		a =b;
		b=nextnum;
		}
	
}

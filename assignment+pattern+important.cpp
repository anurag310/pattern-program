#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
//	int val = 1;
	int i =1;
	while(i<=n)
	{
		
		int j =1,val =1;
		while(j<=n-i+1)
		{
			cout<<val;
			val = val+1;
			j = j+1;
		}
		int space = i-1;
		while(space)
		{
			cout<<"*";
			space = space-1;
		}
			while(i<=j-i+1)
	{	int space = i-1;
		while(space)
		{
			cout<<"*";
			space = space-1;
		}
	
	//	int j =1;
		while(j<=n-i+1)
		{
			cout<<n-i-j+2;
			//val=val-1;
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}}}

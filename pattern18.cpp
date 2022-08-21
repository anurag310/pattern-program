#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i = 1;
	while(i<=n){
		int space = 1;
		while(space<=n-i+1){
			cout<<" ";
			space = space+1;
		}
		int j =1;
		while(j<=i)
		{
			cout<<"*";
			j=j+1;
		}
		int start = 1;
		while(start<i)
		{
			cout<<"*";
			start=start+1;
		}
		if(i==4)
		{   int space2 = 1;
			while(space2<=n-i+1)
			{
				cout<<" ";
				space2=space2+1;
			}
			int k=i;
			while(k<=n-i+1){
				cout<<"*";
				k=k+1;
			}
		}
		cout<<endl;
		i=i+1;
		}}
		

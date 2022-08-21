/* 1010101
	10101
	 101
	  1      */


#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i =1;
	while(i<=n)
	{
		int space = i-1;
		while(space)
		{
			cout<<" ";
			space=space-1;
		}
		int j =1;
		int val =1;
		while(j<=n-i+1)
		{
		
			if(j%2==0)
			{
				cout<<val-1;
			}
			else{
				cout<<val;
			}
			j = j+1;
		}
		
		int start = i;
		while(start<=n-1)
		{
			if (start%2 == 0)
			{
				cout<<val-1;
			}
			else{
				cout<<val;
			}
			start = start +1;
		}
		cout<<endl;
		i = i+1;
	}
}

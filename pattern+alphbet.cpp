#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;

	int row = 1;
	while(row<=n)
	{
		int j =1;
		char ch = 'A'+ row+j-2;
		while(j<=n)
		{
			cout<<ch<<" ";
			ch = ch+1;
			j=j+1;
		}
		cout<<endl;
		row = row+1;
	}
		}

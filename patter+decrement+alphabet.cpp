#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int row = 1;
	while(row <=n)
	{
		int j =1;
		char ch = 'A'+row-1;
		while(j<=row)
		{
			cout<<ch;
			j=j+1;
		}
		cout<<endl;
		row=row+1;
	}
		}

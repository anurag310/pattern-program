#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char ch = 'A';
	int row = 1;
	while(row<=n)
	{
		int j =1;
	                      // we use char ch = 'A' here;
		while(j<=n)
		{
			cout<<ch;
			ch = ch +1;
			j = j+1;
		}
		cout<<endl;
		row = row+1;
	}
}

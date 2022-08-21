#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int row = 1;
	while(row<=n)
	{
		int col = 1; 
		while(col <= row)
		{
			cout<<"*";
			col = col+1;
		/*	cout<<"Value of col in block : "<<col<<" ";*/
			
		}
		cout<<endl;
		/*cout<<"value of col : "<<col;*/
		row = row+1;
	}
}

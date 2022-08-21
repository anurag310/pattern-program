#include<iostream>
using namespace std;
int main()
{
/*	for(int i=0;i<5;i++)
	{
		cout<<"Hi"<<" ";
		cout<<"HEllo"<<" ";
		cout<<endl;
		continue;
		cout<<"HEy";             // unreachable
	}*/
	
	for(int i =0;i<=10;i++)
	{
		if(i==7)
		{
			continue;
		}
		cout<<i<<" ";
	}
}

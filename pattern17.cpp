/*      1
	   23
	  456
	 78910*/  
       
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int val =1;
	int i =1;                                 // here gobal local variable concept
	while(i<=n)
	{
		int space = i;
		while(space<n)
		{
			cout<<" ";
			space = space+1;
		}
		int j =1;
		//int val =1;
		while(j<=i)
		{
			cout<<val<<"";
			val = val+1;
			
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
}

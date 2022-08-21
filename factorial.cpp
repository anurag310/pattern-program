#include<iostream>
using namespace std;
int main(){
	int i=1;
	int n;
	int product = 1;
	cin>>n;
	while(i<=n)
	{
		product = product*i;
		i=i+1;
	}
	cout<<"FActorial of number : "<<product;
}

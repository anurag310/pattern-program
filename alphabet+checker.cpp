#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a character : ";
	cin>>ch;
	
	if(ch>='a' && ch<='z'){
		cout<<"lowercase";
	}
	else if (ch>='A' && ch<='Z'){
		cout<<"Uppercase";
		
	}
	else{
		cout<<"Numeric";
	}
}

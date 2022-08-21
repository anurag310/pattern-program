/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//include <iostream>

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{ 
    int n;
    int a;
    cin>>n>>a;
    int i;
    i = n;
    if(n>=1 or n<=9)
	{
        for (; i<=9; i++)
		{
            switch (i)
			{
            case 1:
                cout<<"one"<<endl; 
            case 2:
                cout<<"two"<<endl;
               
            case 3:
                 cout<<"three"<<endl;
                 break;
            case 4:
                cout<<"four"<<endl;
                break;
                
            case 5:
                cout<<"five"<<endl;
                break;
            case 6:
                cout<<"six"<<endl;
               break;
            case 7:
                cout<<"seven"<<endl;
                break;
            case 8:
                cout<<"eight"<<endl;
     
                break;
            case 9:
                cout<<"nine"<<endl;
                break;
                
		}}
		int j = n;
		for(j;j<=9;j++){
			if(j%2==0){
				cout<<"even"<<endl;
			}
			
			else{
				cout<<"odd"<<endl;
			}
		}}
/*	int lopp = n;
	for(lopp;lopp<=;lopp++)
	{
		if(lopp%2==0)
		{
			cout<<"even"<<endl;
		}
		else{
			cout<<"odd"<<endl;
		}
	}*/
   
    return 0;
}


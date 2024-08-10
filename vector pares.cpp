#include<iostream>
using namespace std; 
int vector[10];
int validar;
int i;
int main ()
{   

	for (i=0;i<10;i++)
	{
		cout<<"Ingresar elemento numerico pocision["<<i<<"]"<<endl;
		cin>>validar;
		if (validar%2==0) 
		{
			cout<<"numero par"<<endl;
			i--;
			
		}
		else
		{
			cout<<"numero impar"<<endl;
			vector[i]=validar;
		}
	}
	for (i=0;i<10;i++)
	 {
	 	cout<<vector[i]<<"\t";
	}
	
	
	
}


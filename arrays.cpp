#include <iostream>
using namespace std;
int vector[5];
int i;
int main()
{
	
	for(i=0;i<5;i++)
	{
		system("cls");
		cout<<"Ingrese elemento pocision ["<<i<<"]"<<endl;
		cin>>vector[i];
		
	}
	
	for (i=0;i<5;i++) 
	{
		cout<<vector[i]<<"\t";
	}
}

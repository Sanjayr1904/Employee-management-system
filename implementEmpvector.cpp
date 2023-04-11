#include<iostream>
#include "headers/Employee.h"
using namespace std;
int main()
{
	int ch,n,ele,f;
	cout<<"\n Enter n ele = ";
	cin>>n;
	Employee e[n];
	cout<<"\n inserting elements......\n ";
	for(int i=0;i<n;i++)
	e[i].setdata();
	do
	{
		cout<<"\n 1 display selected emp \n 2 display all ";
		cout<<"\n 3-------  4 exit ";
		cout<<"\n enter the choice = ";
		cin>>ch;
		switch(ch)
		{
			case 1 : cout<<"\n Enter emp Id to Search = ";
					 cin>>ele;
					 f=1;
					 for(int i=0;i<n;i++)
					 {
					 	if(e[i].getId())==ele()
					 	{
					 		f=0;
					 		e[i].display();
						 }
					 }
					 if(f==1)
					 	cout<<"\n Emp does not exist \n ";
					 	break;
					 
			case 2 : cout<<"\n all records\n ";
			for(int i=0;i<n;i++)
			e[i].display();
			break;
			case 4 : break;
			default :cout<<"\n invalid \n";
		}
	}while(ch!=4);
}

#include<iostream>
#include<vector>
#include "headers/Employee.h"
int main()
{
	int ch,n,ele,f;
	Employee ob;
	vector<Employee> v;
	
	
	do
	{
		cout<<"\n 1 Insert  \n 2 delete ";
		cout<<"\n 3 display selected emp \n 4 display all \n 5 exit ";
	
		cout<<"\n enter the choice = ";
		cin>>ch;
		switch(ch)
		{
			case 3 : cout<<"\n Enter emp Id to Search = ";
					 cin>>ele;
					 f=1;
					 for(int i=0;i<v.size();i++)
					 {
					 	if(v[i].getId()==ele)
					 	{
					 		f=0;
					 		v[i].display();
						 }
					 }
					 if(f==1)
					 	cout<<"\n Emp does not exist \n ";
					 	break;
					 
			case 4 : cout<<"\n all records\n ";
			for(int i=0;i<v.size();i++)
			v[i].display();
			break;
			
			case 1 : ob.setdata();
					v.push_back(ob);
					break;
					
			case 2 : cout<<"\n Enter emp Id to delete = ";
					 cin>>ele;
					 f=1;
					 for(auto i = v.begin(); i!=v.end();i++)
					 {
					 	if(i->getId()==ele)
					 	{
					 		f=0;
					 		v.erase(i);
					 		break;
					 		
						 }
					 }
					 if(f==1)
					 	cout<<"\n Emp does not exist \n ";
					 	break;
					 
			case 5 : break;
			default :cout<<"\n invalid \n";
		}
	}while(ch!=5);
}

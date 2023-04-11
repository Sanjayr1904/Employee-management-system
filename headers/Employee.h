#include<iostream>
using namespace std;

class Employee
{
	private:
		string empName;
		int empId;
		float empSal;
		string empEmail;
		string empSkills[3];
	public:
		void setdata();
		float getSal();
		string getEmail();
		string getName();
		int getId();
		void display();			
};
void Employee::setdata()
{
	cout<<"\n Enter Employee Name = ";
	cin.ignore();
	getline(cin,empName);
	cout<<"\n Enter Employee Id = ";
	cin>>empId;
	cout<<"\n Enter Employee Salary = ";
	cin>>empSal;
	cout<<"\n Enter Employee Email = ";
	cin>>empEmail;
	cout<<"\n Enter 3 Skills = ";
	for(int i=0;i<3;i++)
	{
		cout<<"\n Skill ["<<i+1<<" ] =";
		cin>>empSkills[i];
	}
}
float Employee::getSal()
{
	return empSal;
}
string Employee::getEmail()
{
	return empEmail;
}
string Employee::getName()
{
	return empName;
}
int Employee::getId()
{
	return empId;
}
void Employee::display()
{
	cout<<"\n ------------------------------ \n";
	cout<<"\n empId = "<<empId;
	cout<<"\n empName = "<<empName;
	cout<<"\n empSal = "<<empSal;
	cout<<"\n empEmail = "<<empEmail;
	cout<<"\n Skills \n " ;
	for(int i=0;i<3;i++)
	cout<<i+1<<" : "<<empSkills[i]<<endl;
}


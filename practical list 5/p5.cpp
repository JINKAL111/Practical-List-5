#include<iostream>
using namespace std;

class employee
{
	public:
		int id ;
		string name ;
		int salary ;
		employee(int id,string name,int salary)
		{
			this->id=id;
			this->name=name;
			this->salary=salary;
		}
		void display()
		{
			cout<<"ID is     ::"<<id<<endl;
			cout<<"Name is   ::"<<name<<endl;
			cout<<"Salary is ::"<<salary<<endl;
		}
};
int main()
{
	employee e1(111,"Jinkal",50000);
	employee e2(110,"utsav",50000);
	e1.display();
	e2.display();
	return 0;
}

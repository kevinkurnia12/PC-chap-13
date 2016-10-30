#include <iostream>

using namespace std;

class Employee {
	private :
		string name;
		int idNumber;
		string department;
		string position;
	public :
		Employee(string name, int idNumber, string department, string position);
		Employee(string name, int idNumber);
		Employee();
		string getName();
		int getId();
		string getDepartment();
		string getPosition();
};
		
	Employee::Employee(string name, int idNumber, string department, string position){
		this->name = name;
		this->idNumber = idNumber;
		this->department = department;
		this->position = position;
	}
	
	Employee::Employee(string name, int idNumber){
		this->name = name;
		this->idNumber = idNumber;
		this->department = "";
		this->position = "";
	}
	
	Employee::Employee(){
		this->name = "";
		this->idNumber = 0;
		this->department = "";
		this->position = "";
	}
	
	string Employee::getName() {
			return name;
		}
		
		int Employee::getId() {
			return idNumber;
		}
		
		string Employee::getDepartment() {
			return department;
		}
		
		string Employee::getPosition() {
			return position;
		}

int main(){
	
	Employee employee1 = Employee("Susan Meyers", 47889, "Accounting", "Vice President");
	Employee employee2 = Employee("Mark Jones", 39119, "IT\t", "Programmer");
	Employee employee3 = Employee("Joy Rogers", 81774, "Manufacturing", "Engineer");
	
	Employee employeeArray[3] = {employee1, employee2, employee3};
	
	for (int i=0; i<3; i++){
		cout << employeeArray[i].getName() << "\t\t" << employeeArray[i].getId() << "\t\t" << employeeArray[i].getDepartment() << "\t\t" << employeeArray[i].getPosition();
		cout << endl;
	}
	
	return 0;
}



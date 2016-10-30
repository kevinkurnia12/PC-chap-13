#include <iostream>

using namespace std;

class Date {
	// properties
	int day;
	int month;
	int year;
	
	string monthName[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	
	// functions
	public:
		Date(int day, int month, int year);
		void printFirstForm();
		void printSecondForm();
		void printThirdForm();
};

	Date::Date(int day, int month, int year){
		this->day = day;
		this->month = month;
		this->year = year;
	}
	
	void Date::printFirstForm(){
		cout << endl << month << "/" << day << "/" << year;
	}
	
	void Date::printSecondForm(){
		cout << endl << monthName[month-1] << " " << day << ", " << year;
	}
	
	void Date::printThirdForm(){
		cout << endl << day << " " << monthName[month-1] << " " << year;
	}
	
int main(){
	int inDay;
	int inMonth;
	int inYear;
	
	cout << "Enter Date, month, and year in integer: ";
	cin >> inDay >> inMonth >> inYear;
	if (inDay > 31 || inDay < 1){
		cout << "Do not accept values of the day greather than 31 or less than 1.";
		return 0;
	}
	else if(inMonth > 12 || inMonth < 1){
		cout << "Do not accept values of month greater than 12 or less than 1.";
		return 0;
	}
	Date newDate = Date(inDay, inMonth, inYear);
	newDate.printFirstForm();
	newDate.printSecondForm();
	newDate.printThirdForm();
	
	return 0;
}

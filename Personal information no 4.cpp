#include <iostream>
#include <string>

using namespace std;

class PersonalInfo{
	private :
		string name;
		string address;
		int age;
		int phoneNumber;
	public :
		PersonalInfo (string name, string address, int age, int phoneNumber); 
		void setName(string);
		void setAddress(string);
		void setAge(int);
		void setPhoneNumber(int);
		string getName();
		string getAddress();
		int getAge();
		int getPhoneNumber();
};

	PersonalInfo::PersonalInfo (string name, string address, int age, int phoneNumber){
		this->name = name ;
		this->address = address ;
		this->age = age ;
		this->phoneNumber = phoneNumber ;
	}
	
	void PersonalInfo::setName(string name){
		this->name = name;
	}
	void PersonalInfo::setAddress(string address){
		this->address = address;
	}
	void PersonalInfo::setAge(int age){
		this->age = age;
	}
	void PersonalInfo::setPhoneNumber(int phoneNumber){
		this->phoneNumber = phoneNumber;
	}
	string PersonalInfo::getName(){
		return name;
	}
	string PersonalInfo::getAddress(){
		return address;
	}
	int PersonalInfo::getAge(){
		return age;
	}
	int PersonalInfo::getPhoneNumber(){
		return phoneNumber;
	}

int main(){
	PersonalInfo yourself = PersonalInfo("Kevin", "Puri", 18, 0421567);
	PersonalInfo friends = PersonalInfo("Kurnia", "Indah", 19, 0422654);
	PersonalInfo family = PersonalInfo("Santosa", "Pondok", 20, 0423546);
	
	PersonalInfo arr[3] = {yourself, friends, family};
	string people[3] = {"Myself", "Friend", "Family"};
	for (int x=0; x < 3; x++){
		cout << people[x] << "\t\t";
		cout << arr[x].getName() << "\t" << arr[x].getAddress() << "\t" << arr[x].getAge() << "\t" << arr[x].getPhoneNumber();
		cout << endl;
	}
	
	
	return 0;
}

#include <iostream>
#include <string>

using namespace std;

class RetailItem{
	private :
		string description;
		int unitsOfHand;
		double price;
	public :
		RetailItem(string description, int unitsOfHand, double price){
			this->description = description;
			this->unitsOfHand = unitsOfHand;
			this->price = price;
		}
		void setDesc(string description){
			this->description = description;
		}
		void setUnits(int unitsOfHand){
			this->unitsOfHand = unitsOfHand;
		}
		void setPrice(double price){
			this->price = price;
		}
		string getDesc(){
			return description;
		}
		int getUnits(){
			return unitsOfHand;
		}
		double getPrice(){
			return price;
		}
};

int main(){
	RetailItem item1 = RetailItem("Jacket", 12, 59.95);
	RetailItem item2 = RetailItem("Jeans", 40, 34.95);
	RetailItem item3 = RetailItem("Shirt", 20, 24.95);
	
	RetailItem item[3] = {item1, item2, item3};
	string numItem[3] = {"Item #1", "Item #2", "Item #3"};
	string row[3] = {"Description", "Units of Hand", "Price"};
	
	for (int x = 0; x < 3; x++){
		cout << "\t" << row[x] << " \t\t";
	}
	
	for (int y = 0; y < 3; y++){
		cout << endl << endl << numItem[y] << "\t " << item[y].getDesc() << "\t\t\t\t\t" << item[y].getUnits() << "\t\t\t" << item[y].getPrice() << endl;
	}
	
	return 0;
}

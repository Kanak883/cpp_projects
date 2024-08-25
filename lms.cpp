#include <iostream>
#include <cstdlib>

//student variables
int c_balance = 0;




//student functions
void crt_acc() {
	std::string std_name;
	int std_age;
	std::cout << "REGISTER YOURSELF!" << std::endl;;
	std::cout << "Name:" << std::endl;
	std::cin >> std_name;
	system("cls");
	std::cout << "Age:" << std::endl;
	if (!(std::cin >> std_age)) throw "Invalid Input!";
	system("cls");
	std::cout << "Please a deposit minimum rupees 100 to avail services!" << std::endl;
	std::cout << " " << std::endl;
	system("curl qrenco.de/https://www.google.com"); //taking google link as a QR payment example
	c_balance = c_balance + 100;
	system("pause");
}

void balance() {
	std::cout << "Your current balance is: " << c_balance << std::endl;
	system("pause");
}


void book_purchase() {
	std::cout << "Available Books:" << std::endl;
	system("pause");
	//using fstream library to access the txt file of books
}

void rent_book() {
	std::cout << "Avaialble Books:" << std::endl;
	system("pause");
	//using fstream library to access the txt file of books
}






void student() {
	int std_choice =0;
	while (5 != std_choice) {
		std::cout << "1) Create an Account\n2) View balance\n3) Purchase a book\n4) Rent a book\n5) Back to Login screen" << std::endl;
		std::cin >> std_choice;
		system("cls");
		switch(std_choice) {
			case 1:
				crt_acc();
				system("cls");
				break;
			case 2:
				balance();
				system("cls");
				break;
			case 3:
				book_purchase();
				system("cls");
				break;
			case 4:
				rent_book();
				system("cls");
				break;
			default:
				break;
		}
		system("cls");
	}
	
}
int main() {
	student();
	return 0;
}

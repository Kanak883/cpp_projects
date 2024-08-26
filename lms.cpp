#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

//student variables
int c_balance = 0;
int login_as;




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
		std::cout << "1) Create an Account\n2) View balance\n3) Purchase a book\n4) Rent a book\n5) Back to Login screen"<< std::endl;
		std::cin >> std_choice;
		system("cls");
		switch(std_choice) {
			case 1:
				crt_acc();
				c_balance = c_balance + 100;
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

void add_book() {
	std::string Filetext;
	std::ifstream Myreadfile("Booklist.txt");

	if (Myreadfile.is_open()) { 
		while (std::getline(Myreadfile, Filetext)) {
			std::cout << Filetext << std::endl; 
		}
		Myreadfile.close();
	}
	else {
		std::cout << "Unable to open file" << std::endl;
	}
}

void admin() {
	int adm_choice;
	while (true) {
		std::cout << "1) Add Books\n2) Edit details of a book\n3) Status of Books" << std::endl;
		std::cin >> adm_choice;
		switch(adm_choice) {
			case 1:
				add_book();
				break;
			default:
				system("cls");
				std::cout << "Invalid input" << std::endl;
				break;
				system("cls");
		}
	}
	

}

int main() {
	while (true) {
		std::cout << "Login as:\n1) Student\n2) Admin" << std::endl;
		std::cin >> login_as;
		system("cls");
		if (login_as == 1) {
			student();
			system("cls");
		}
		else if (login_as == 2) {
			admin();
			system("pause");
		}
		else {
			std::cout << "Invalid Option!" << std::endl;
			system("pause");
		}
		system("cls");
	}
	
	return 0;
}

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <limits>

//student variables
int c_balance = 0;
int login_as;



//misinput checker
void misinput() {
	if (std::cin.fail()) {
		std::cout << "Invalid Input!" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

//student functions
void crt_acc() {
	std::string std_name;
	int std_age;
	std::cout << "REGISTER YOURSELF!" << std::endl;;
	std::cout << "Name:" << std::endl;
	std::cin >> std_name;
	misinput();

	system("cls");
	std::cout << "Age:" << std::endl;
	misinput();

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
	std::ifstream f("Booklist.txt");

	if (f.is_open())
		std::cout << f.rdbuf();
	system("pause");
	//using fstream library to access the txt file of books
}

void rent_book() {
	std::cout << "Avaialble Books:" << std::endl;
	std::ifstream f("Booklist.txt");

	if (f.is_open())
		std::cout << f.rdbuf();
	system("pause");
	system("cls");
	//using fstream library to access the txt file of books
}



void student() {
	int std_choice =0;
	while (5 != std_choice) {
		std::cout << "1) Create an Account\n2) View balance\n3) Purchase a book\n4) Rent a book\n5) Back to Login screen"<< std::endl;
		std::cin >> std_choice;
		misinput();
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

void book_status() {
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

void add_book() {
	std::string book_name;
	std::string book_author;
	int add_bchoice;
	int book_price;

	std::cout << "Please Enter the book details:" << std::endl;
	std::cout << "Name: ";
	std::cin >> book_name;
	misinput();

	std::cout << "Author: ";
	std::cin >> book_author;
	misinput();

	std::cout << "Price: ";
	std::cin >> book_price;
	misinput();

	std::cout << "Confirm to add it?\n1) Yes\n2) No" << std::endl;
	std::cin >> add_bchoice;
	misinput();

	if (add_bchoice == 1) {
		std::ofstream outfile;

		outfile.open("Booklist.txt", std::ios_base::app);
		outfile << "\n" << "Name: " << book_name << "\n" << "Author: " << book_author << "\n" << "Price: " << "$" << book_price << "\n";
		std::cout << "Data succesfully added!" << std::endl;
		system("pause");
		system("cls");
	}
	else {
		system("pause");
		system("cls");
	}
}

void admin() {
	int adm_choice;
	while (true) {
		std::cout << "1) Add Books\n2) Status of Books" << std::endl;
		std::cin >> adm_choice;
		misinput();

		system("cls");
		switch(adm_choice) {
			case 1:
				add_book();
				break;
			
			case 2:
				std::ifstream f("Booklist.txt");

				if (f.is_open())
					std::cout << f.rdbuf();
				system("pause");
				system("cls");
		}
	}
	

}

int main() {
	while (true) {
		std::cout << "Login as:\n1) Student\n2) Admin" << std::endl;
		std::cin >> login_as;
		misinput(); 
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

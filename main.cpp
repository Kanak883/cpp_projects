#include <iostream>
#include <cstdlib>


int login_as;
int i = 3;
int std_choice;
int std_deposit;

void student() {

	std::string std_name;
	int std_age;
	int s = 6;
	while (s != std_choice) {
		std::cout << "1) Create an account\n2) View balance\n3)Purchase a Book\n4)Rent a Book\n5)Return a book\n6) Login Screen" << std::endl;
		std::cin >> std_choice;
		system("cls");

		switch (std_choice)
		{
		case 1:
			system("cls");
			std::cout << "REGISTER!" << std::endl;
			std::cout << "Enter Name: " << std::endl;
			std::cin >> std_name;
			system("cls");
			std::cout << "Age: " << std::endl;
			std::cin >> std_age;
			system("cls");
			std::cout << "Name: " + std_name << std::endl;
			std::cout << "Age: " + std_age << std::endl;

			std::cout << "Please deposit 10$ as initial deposit!\n1)Yes\n2)No" << std::endl;
			system("curl qrenco.de//https://www.google.com");
			std::cin >> std_deposit;
			break;

		default:
			break;
		}
	}

}

void libian() {
	std::cout << "This is librarian" << std::endl;
}


int main() {
	while (i != login_as) {
		std::cout << "Login as:\n1) User\n2) Librarian\n3) Exit\n" << std::endl;
		std::cin >> login_as;
		system("cls");
		if (login_as == 1) {
			student();
		}
		else if (login_as == 2)
		{
			libian();
		}
		else {
			break;
		}

	}

	return 0;
}

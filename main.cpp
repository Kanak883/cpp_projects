#include <iostream>
#include <stdlib.h>
using namespace std;


int login_as;
int i = 3;
int std_choice;

void student() {
	char std_name;
	int std_age;
	int s = 6;
	while (s != std_choice) {
		cout << "1) Create an account\n2) View balance\n3)Purchase a Book\n4)Rent a Book\n5)Return a book\n6) Login Screen" << endl;
		cin >> std_choice;
		switch (std_choice)
		{
		case 1:
			cout << "REGISTER!" << endl;
			cout << "Enter Name:\n" << endl;
			cin >> std_name;
			cout << "Age: \n" << endl;
			cin >> std_age;
			cout << "Please deposit 10$ as initial deposit!\n" << endl;
			cin >>
			break;
		
		default:
			break;
		}
	}

}
int main() {
	while (i != login_as ){
		cout << "Login as:\n1) User\n2) Librarian\n3) Exit" << endl;
		cin >> login_as;
		student();
	}
	
	return 0;
}

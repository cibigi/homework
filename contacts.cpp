/*
Christian Battista Giannarelli
2020-03-13, 3 BINF

Contacts tool
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Person class (name, surname, phone number), constructor, getters
class Person {
private:
    //Data (name, surname, phone number)
    string name;
    string surname;
    string phoneNumber;

public:
  	//Constructor (name, surname, phone number)
  	Person(string nameSetter, string surnameSetter, string phoneNumberSetter) {
    	name= nameSetter;
    	surname= surnameSetter;
    	phoneNumber= phoneNumberSetter;
  	}

  	//Getters (name, surname, phone number)
  	string getName() {
		return name;
	}
  	string getSurname() {
		return surname;
	}
  	string getPhoneNumber() {
		return phoneNumber;
	}
};

//Prototypes: adding a contact, removing a contact, showing contacts, chosing operation
void add(vector<Person>);
void remove(vector<Person>);
void show(vector<Person>);
void chose(vector<Person>);

int main() {
  	//Vector of objects (Person)
  	vector<Person> contacts;

  	//Welcome screen
  	cout << "Welcome to Contacts!" << endl << "by Christian Battista Giannarelli, 2020" << endl;

  	//Chosing operation
  	chose(contacts);
  
  	return 0;
}

//Adding a contact (function)
void add(vector<Person> contacts) {
  	//Variables (name, surname, phone number)
  	string name, surname, phoneNumber;

  	//Assignment (user input)
  	cout << endl << "Name" << endl;
  	cin >> name;
  	cout << "Surname" << endl;
  	cin >> surname;
  	cout << "Phone number" << endl;
  	cin >> phoneNumber;

  	//New contact (constructor)
  	contacts.push_back(
		Person(name, surname, phoneNumber)
	);

	//Alert
	cout << "Added!" << endl;

  	//Chosing next operation
  	chose(contacts);
}

//Removing a contact(contact ID needed)
void remove(vector<Person> contacts) {
  	//Contact ID
  	unsigned short int id;

  	//Assignment (user input)
  	do {
    	cout << endl << "Which contact would you like to delete? (ID)" << endl;
    	cin >> id;
  	} while(id<0 || id>=contacts.size());

  	//Contact removing
  	contacts.erase(contacts.begin()+id);

	//Alert
	cout << "Deleted!" << endl;

  	//Chosing next operation
  	chose(contacts);
}

//Contacts viewer
void show(vector<Person> contacts) {
	//Printing contacts (if there are contacts)
	if(contacts.size() == 0) {
		//Alert (no contacts)
		cout << endl << "There are no contacts!" << endl;
	} else {
		//Printing loop 
  		for(int i= 0; i<contacts.size(); i++) {
    		cout << endl << "Contact ID: " << i << endl;
    		cout << "Name: " << contacts[i].getName() << endl;
    		cout << "Surname: " << contacts[i].getSurname() << endl;
    		cout << "Phone number: " << contacts[i].getPhoneNumber() << endl;
  		}
	}

	//Chosing next operation
  	chose(contacts);
}

//Chosing operation (add, remove, show, quit)
void chose(vector<Person> contacts) {
  	//Variable (selection)
  	unsigned short int sel;

  	//Assignment (user input)
  	do {
    	cout << endl << "1) New contact" << endl << "2) Delete contact (you'll need a contact ID)" << endl << "3) Show contacts (IDs are showed here)" << endl << "4) Quit" << endl;
    	cin >> sel;
  	} while(sel<1 || sel>4);

  	//Switch (1=add, 2=remove, 3=show, 4=quit)
  	switch(sel) {
    	case 1:
			add(contacts);
			break;
    	case 2:
			remove(contacts);
			break;
    	case 3:
			show(contacts);
			break;
    	case 4:
			cout << endl << "Bye!" << endl;
			break;
  	}
}
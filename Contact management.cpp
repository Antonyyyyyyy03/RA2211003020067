#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Contact {
private:
    string name;
    string phoneNumber;
public:
    Contact(string name, string phoneNumber) {
        this->name = name;
        this->phoneNumber = phoneNumber;
    }
    string getName() { return name; }
    string getPhoneNumber() { return phoneNumber; }
};

class ContactManager {
private:
    vector<Contact> contacts;
public:
    void addContact(Contact contact) {
        contacts.push_back(contact);
    }
    void displayContacts() {
        cout << "Contacts:\n";
        for (Contact contact : contacts) {
            cout << contact.getName() << " - " << contact.getPhoneNumber() << endl;
        }
    }
    void searchContact(string name) {
        for (Contact contact : contacts) {
            if (contact.getName() == name) {
                cout << contact.getName() << " - " << contact.getPhoneNumber() << endl;
                return;
            }
        }
        cout << "Contact not found.\n";
    }
};

int main() {
    ContactManager contactManager;

    Contact contact1("John Doe", "555-1234");
    Contact contact2("Jane Smith", "555-5678");
    Contact contact3("Bob Johnson", "555-9012");

    contactManager.addContact(contact1);
    contactManager.addContact(contact2);
    contactManager.addContact(contact3);

    contactManager.displayContacts();

    contactManager.searchContact("John Doe");
    contactManager.searchContact("Bob Johnson");
    contactManager.searchContact("Mary Jones");

    return 0;
}  \\ End of code

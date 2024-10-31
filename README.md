Contact Management System

Overview:-

               The Contact Management System is a simple console-based application written in C that allows users to manage their contacts. Users can add new contacts, view all existing contacts, and exit the program. Each contact consists of a name, phone number, and email address.

Features:-

Add New Contact: Users can input a new contact's name, phone number, and email.
View All Contacts: Users can view a list of all added contacts.
Exit the Program: Users can exit the application gracefully.

Structure:-

The program uses a structure to define a contact:
c
struct contact {
    char name[50];
    char phone[15];
    char email[50];
};


Functions:-

void displayContact(struct contact c): Displays the details of a single contact.

Usage:-

Compile the program using a C compiler (e.g., GCC):

bash

gcc contact_management.c 

Run the compiled program:

bash
./a.out

Follow the on-screen menu to:

Add new contacts by selecting option 1.
View all contacts by selecting option 2.
Exit the program by selecting option 3.

Example Interaction

Contact Management System
°°°°°°°°°°°°°°°°°°°°°°°°°°°°
1.Add New Contact
2.View All The Contacts
3.Exit The Program
Enter Your Choice: 1

Enter Name: John Doe

Enter Phone Number: 1234567890

Enter Email: john.doe@example.com

***Contact added successfully.***

Contact Management System
...
Enter Your Choice: 2

Contacts List:
...
Contact1:
Name: John Doe
Phone: 1234567890
Email: john.doe@example.com

👋Exit the System👋

Limitations:-

The system can store up to 100 contacts due to the defined constant MAX_CONTACTS.
Currently, it does not handle duplicate entries or provide advanced features like editing or deleting contacts.
Input validation is minimal; users should enter data in the expected format.

Future Improvements:-

Implement input validation for names, phone numbers, and emails.
Allow editing and deleting of contacts.
Store contacts in a file for persistent storage.
Provide a search functionality for quick access to specific contacts.

License
This program is open-source and can be modified or distributed as per your requirem

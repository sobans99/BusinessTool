#ifndef person_h
#define person_h

#include<iostream>
#include<windows.h>
#include<string>
#include<string.h>

int get_index();

using namespace std;

class person
{
private:
	string phone;
	string cnic;
	string address;
public:
	string name;
	int age;
	
	person()
	{
		name = " ";
		age = 0;
		phone = " ";
		cnic = " ";
		address = " ";
	}
	void set_data()
	{
		cout << "\t\t\t  Enter Name : ";
		cin >> name;
	data:
		cout << "\t\t\t  Enter Age : ";
		cin >> age;
		if (age < 18 || age > 50)
		{
			cout << "\t\t\t\t\t  NOT ELIGIBLE \n \t\t\t\t\t  ReWrite Data\n";
			goto data;
		}
		cout << "\t\t\t  Enter Phone : ";
		cin >> phone;
		cout << "\t\t\t  Enter CNIC : ";
		cin >> cnic;
		cout << "\t\t\t  Enter Address : ";
		cin.ignore();
		getline(cin, address);
		
	}
	
	int get_name_size()
	{
		return name.size();
	}
	string get_phone()
	{
		return phone;
	}
	int get_phone_size()
	{
		return phone.size();
	}
	string get_cnic()
	{
		return cnic;
	}
	int get_cnic_size()
	{
		return cnic.size();
	}
	string get_address()
	{
		return address;
	}
	int get_address_size()
	{
		return address.size();
	}
	void set_cnic(string c)
	{
		cnic = c;
	}
	void set_address(string a)
	{
		address = a;
	}
	void set_phone(string sp)
	{
		phone = sp;
	}

	void emp_file_writing()
	{
		ofstream write;
		write.open("employee_data.txt", ios_base::app);
		write << name;
		for (int i = 0; i < 12 - get_name_size(); i++)
			write << " ";
		write << age;
		if (age<10)
		write << "         ";
		else if (age<100)
		write << "        ";

		write << phone;
		for (int i = 0; i < 19 - get_phone_size(); i++)
			write << " ";
		write << cnic;
		for (int i = 0; i < 25 - get_cnic_size(); i++)
			write << " ";

		write << address;
		for (int i = 0; i < 25 - get_address_size(); i++)
			write << " ";
		write << endl;
		write.close();
	}

	void display()
	{
		cout << name;
		for (int i = 0; i < 12 - get_name_size(); i++)
			cout << " ";
		cout << age;
		if (age<100)
			cout << "        ";
		if (age<10)
			cout << "       ";
		cout << phone;
		for (int i = 0; i < 19 - get_phone_size(); i++)
			cout << " ";
		cout << cnic;
		for (int i = 0; i < 25 - get_cnic_size(); i++)
			cout << " ";

		cout << address;
		for (int i = 0; i < 25 - get_address_size(); i++)
			cout << " ";

	}
	
	void delete_data()
	{
		name = "Deleted";
		age = 0;
		phone = "Deleted";
		cnic = "Deleted";
		address = "Deleted";
	}
};

#endif
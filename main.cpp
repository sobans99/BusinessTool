#include<iostream>
#include<windows.h>
#include<string>
#include<string.h>
#include <fstream>
#include "person_class.h"
#include "emp_class.h"
#include "temp_class.h"
#include "product_class.h"

using namespace std;

//FUNCTIONS USED IN THIS PROJECT
void typing_efect(char *arr, int size, int speed);
void welcome();
void employee_menu();
void get_index_emp();
void set_index_emp();
void read_emp_data();
void read_salary();
void emp_file_firsttime();
void emp_sal_file_firsttime();
void restore_emp_data(employee &e, int line_no);
void restore_salary_data(employee &e, int line_no);
void emp_update_menu();
void emp_update_All();
void sal_update_menu();
void calculate_emp_salary();
void set_inv_index();
void get_inv_index();
int get_index_inv();
void inventory_menu();
void inv_file_firsttime();
void restore_inv_data(product &p, int line_no);
void read_inv_data();
void inv_update_menu();
void inv_goto_update_menu();
void update_inv_product_all();
void add_inv_product_stock();
void update_inv_product_price();
void update_inv_product_expiry();
void delete_emp();
void delete_product();
void invoice_menu();
void make_bill();
void set_business();
void get_business();
void write_bill_top();
void write_bill_middle(product p, int pc,int qty);
void write_bill_end();
void restore_all();
void clear_bill_file();
void goto_display_bills();
void bill_display(int btd);
void exit_program();

//GLOBAL VARIABLES
int emp_index;
int inv_index;
int bill_no;
employee e[100];
product net_total;
product p[1000];
date today;
string business_name;
string business_address;


//MAIN EFFECTS
void welcome()
{
	int speed = 100;
	system("color a");
	cout << "\t\t\t%%        %%                                                             " << endl;
	Sleep(speed);
	cout << "\t\t\t%%        %%  %%%%%%%  %%       %%%%%%%  %%%%%%%  %%%%%    %%%%%  %%%%%%%" << endl;
	Sleep(speed);
	cout << "\t\t\t%%        %%  %%       %%       %%       %%   %%  %%  %%  %%  %%  %%     " << endl;
	Sleep(speed);
	cout << "\t\t\t%%   %%   %%  %%%%%    %%       %%       %%   %%  %%   %%%    %%  %%%%%  " << endl;
	Sleep(speed);
	cout << "\t\t\t%%   %%   %%  %%       %%       %%       %%   %%  %%          %%  %%     " << endl;
	Sleep(speed);
	cout << "\t\t\t%%%%%% %%%%%  %%%%%%%  %%%%%%%  %%%%%%%  %%%%%%%  %%          %%  %%%%%%%" << endl;
	Sleep(speed);
	cout << "\t\t\t                                                                         " << endl;
	Sleep(speed);
	cout << "\t\t\t                                                                         " << endl;
	Sleep(speed);
	cout << "\t\t\t                                                                         " << endl;
	Sleep(speed);
	cout << "\t\t\t                           %%%%%%%%  %%%%%%%                             " << endl;
	Sleep(speed);
	cout << "\t\t\t                              %%     %%   %%                             " << endl;
	Sleep(speed);
	cout << "\t\t\t                              %%     %%   %%                             " << endl;
	Sleep(speed);
	cout << "\t\t\t                              %%     %%%%%%%                             " << endl;
	Sleep(speed);
	cout << "\t\t\t                                                                         " << endl;
	Sleep(speed);
	cout << "\t\t\t                                                                         " << endl;
	int speed2 = 50;
	Sleep(speed2);
	cout << "\t\t\t\t    ";
	char arr[] = "  ********  BUSINESS MANAGEMENT SYSTEM  ******** ";
	typing_efect(arr, sizeof (arr), 50);
	cout << endl;
}

void exit_program()
{
	system("cls");
	int speed = 100;
	system("color b");
	cout << "\t\t\t                                                                                         " << endl;
	Sleep(speed);
	cout << "\t\t\t\t%%%%%%%%%%  %%    %%      %%%%      %%%     %%  %%    %%      " << endl;
	Sleep(speed);
	cout << "\t\t\t\t    %%      %%    %%     %%  %%     %% %%   %%  %%   %%       " << endl;
	Sleep(speed);
	cout << "\t\t\t\t    %%      %%%%%%%%    %%%%%%%%    %%  %%  %%  %% %%         " << endl;
	Sleep(speed);
	cout << "\t\t\t\t    %%      %%    %%   %%      %%   %%   %% %%  %%   %%       " << endl;
	Sleep(speed);
	cout << "\t\t\t\t    %%      %%    %%  %%        %%  %%     %%%  %%     %%     " << endl;
	Sleep(speed);
	cout << "\t\t\t\t                                                              " << endl;
	Sleep(speed);
	cout << "\t\t\t\t                                                              " << endl;
	Sleep(speed);
	cout << "\t\t\t\t                %%    %%  %%%%%%%  %%   %%                     " << endl;
	Sleep(speed);
	cout << "\t\t\t\t                 %%  %%   %%   %%  %%   %%                     " << endl;
	Sleep(speed);
	cout << "\t\t\t\t                   %%     %%   %%  %%   %%                     " << endl;
	Sleep(speed);
	cout << "\t\t\t\t                   %%     %%   %%  %%   %%                     " << endl;
	Sleep(speed);
	cout << "\t\t\t\t                   %%     %%%%%%%  %%%%%%%                     " << endl;
	Sleep(speed);
	cout << "\t\t\t\t                                                              " << endl;
	Sleep(speed);
	cout << "\t\t\t\t                                                              " << endl;
	Sleep(speed);
	int speed2 = 50;
	Sleep(speed2);
	cout << "\n\t\t\t\t\t         ";
	char arr[] = "******  GOOD BYE  ****** ";
	typing_efect(arr, sizeof (arr), 50);
	cout << endl;
}

void typing_efect(char *arr, int size, int speed)
{
	for (int i = 0; i<size; i++)
	{
		Sleep(speed);
		cout << arr[i];
	}
}


//MAIN AND HIS SUB MENUS
void main_menu()
{
	int speed = 10;
	int choice;
	system("color e");
	system("cls");
	Sleep(speed);
	cout << "\n\t\t\t================================================================================";
	Sleep(speed);
	cout << "\n\t\t\t==                                 MAIN MENU                                  ==";
	Sleep(speed);
	cout << "\n\t\t\t================================================================================\n";
	Sleep(speed);
	cout << "\n\t\t\t [1] EMPLOYEE (add/remove or manage employee data)";
	Sleep(speed);
	cout << "\n\t\t\t [2] INVENTORY (add/remove or update inventory items)";
	Sleep(speed);
	cout << "\n\t\t\t [3] INVOICE (make new bill or display old)";
	Sleep(speed);
	cout << "\n\t\t\t [4] EXIT PROGRAM \n";
	Sleep(speed);
	cout << "\n\t\t\t ";
	char arr[] = "ENTER YOUR CHOICE (1-4) : ";
	typing_efect(arr, sizeof (arr), 50);
	cin >> choice;
	switch (choice)
	{
	case 1:
		system("cls");
		system("color b");
		employee_menu();
		break;
	case 2:
		system("cls");
		system("color b");
		inventory_menu();
		break;
	case 3:
		system("cls");
		invoice_menu();
		break;
	case 4:
		exit_program();
		break;
	default:
		main_menu();
		break;
	}
} 

void employee_menu()
{
	get_index_emp();
	if (emp_index == 0)
	{
		emp_file_firsttime();
		emp_sal_file_firsttime();
	}
	restore_all();
	int speed = 10;
	int choice;
	Sleep(speed);
	cout << "\n\t\t\t================================================================================";
	Sleep(speed);
	cout << "\n\t\t\t==                                EMPLOYEE MENU                               ==";
	Sleep(speed);
	cout << "\n\t\t\t================================================================================\n";
	Sleep(speed);
	cout << "\n\t\t\t [1] ADD EMPLOYEE ";
	Sleep(speed);
	cout << "\n\t\t\t [2] DISPLAY AND UPDATE";
	Sleep(speed);
	cout << "\n\t\t\t [3] CALCULATE SALARY";
	Sleep(speed);
	cout << "\n\t\t\t [4] DISPLAY SALARY";
	Sleep(speed);
	cout << "\n\t\t\t [5] BACK TO MAIN MENU\n";
	Sleep(speed);
	cout << "\n\t\t\t ";
	char arr[] = "ENTER YOUR CHOICE (1-5) : ";
	typing_efect(arr, sizeof (arr), 50);
	cin >> choice;
	switch (choice)
	{
	case 1:
		e[emp_index].set_data();
		e[emp_index].write_emp_id();
		e[emp_index].emp_file_writing();
		emp_index++;
		set_index_emp();
		cout << "\n\t\t\tData Stored Sucessfully\n";
		employee_menu();
		break;
	case 2:
		cout << "\n\t\t=====================================================================================================\n";
		read_emp_data();
		cout << "\n\t\t=====================================================================================================";
		emp_update_menu();
		break;
	case 3:
		calculate_emp_salary();
		
		break;

	case 4:
		cout << "\n\t\t=====================================================================================================\n";
		read_salary();
		cout << "\n\t\t=====================================================================================================\n";
		sal_update_menu();
		break;
	case 5:
		main_menu();
		break;
	default:
		system("cls");
		employee_menu();

		break;

	}
}

void inventory_menu()
{
	get_inv_index();
	if (inv_index == 0)
	{
		inv_file_firsttime();
	}
	restore_all();
	int speed = 10;
	int choice;
	Sleep(speed);
	cout << "\n\t\t\t================================================================================";
	Sleep(speed);
	cout << "\n\t\t\t==                               INVENTORY MENU                               ==";
	Sleep(speed);
	cout << "\n\t\t\t================================================================================\n";
	Sleep(speed);
	cout << "\n\t\t\t [1] ADD PRODUCT ";
	Sleep(speed);
	cout << "\n\t\t\t [2] DISPLAY AND UPDATE ";
	Sleep(speed);
	cout << "\n\t\t\t [3] BACK TO MAIN MENU\n";
	Sleep(speed);
	cout << "\n\t\t\t ";
	char arr[] = "ENTER YOUR CHOICE (1-3) : ";
	typing_efect(arr, sizeof (arr), 50);
	cin >> choice;
	switch (choice)
	{
	case 1:
		p[inv_index].set_product_data();
		p[inv_index].inv_file_writing();
		inv_index++;
		set_inv_index();
		cout << "\n\t\t\tData Stored Sucessfully\n";
		inventory_menu();
		break;
	case 2:
		cout << "\n\t\t=====================================================================================================\n";
		read_inv_data();
		cout << "\n\t\t=====================================================================================================";
		inv_goto_update_menu();
		break;
	case 3:
		main_menu();
		break;
	default:
		system("cls");
		inventory_menu();
		break;
	}
}

void invoice_menu()
{
	int speed = 10;
	int choice;
	system("color b");
	Sleep(speed);
	cout << "\n\t\t\t================================================================================";
	Sleep(speed);
	cout << "\n\t\t\t==                               INVOICE MENU                                 ==";
	Sleep(speed);
	cout << "\n\t\t\t================================================================================\n";
	Sleep(speed);
	cout << "\n\t\t\t [1] MAKE BILL";
	Sleep(speed);
	cout << "\n\t\t\t [2] DISPLAY BILL";
	Sleep(speed);
	cout << "\n\t\t\t [3] BACK TO MAIN MENU\n";
	Sleep(speed);
	cout << "\n\t\t\t ";
	char arr[] = "ENTER YOUR CHOICE (1-4) : ";
	typing_efect(arr, sizeof (arr), 50);
	cin >> choice;
	switch (choice)
	{
	case 1:
		make_bill();
		break;
	case 2:
		goto_display_bills();
		break;
	case 3:
		main_menu();
		break;
	default:
		system("cls");
		invoice_menu();
		break;

	}
}


//GET GLOBAL VALUES FROM FILE
void get_index_emp()
{
	ifstream read;
	read.open("index_emp.txt");
	if (!read.fail())
	{
		read >> emp_index;
	}
	else{
		emp_index = 0;
	}
	read.close();
}

void get_inv_index()
{
	ifstream read;
	read.open("index_inv.txt");
	if (!read.fail())
	{
		read >> inv_index;
	}
	else{
		inv_index = 0;
	}
	read.close();
}

void get_bill_no()
{
	ifstream read;
	read.open("bill_no.txt");
	if (!read.fail())
	{
		read >> bill_no;
	}
	else{
		bill_no = 1;
	}
	read.close();
}

void get_business()
{
	ifstream read;
	read.open("bussiness.txt");
	if (!read.fail())
	{
		getline(read, business_name);
		getline(read, business_address);
	}
	else{
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t         This is for the First Time \n";
		cout << "\t\t\t\t\         Enter Name of Your Business : ";
		cin.ignore();
		getline(cin, business_name);
		cout << "\t\t\t\t\         Enter Shop Address : ";
		cin.ignore();
		getline(cin, business_address);
		set_business();
	}
	read.close();
}


//SET GLOBAL VALUES TO FILE
void set_index_emp()
{
	ofstream write;
	write.open("index_emp.txt", ios_base::out);
	write << emp_index;
	write.close();
}

void set_inv_index()
{
	ofstream write;
	write.open("index_inv.txt", ios_base::out);
	write << inv_index;
	write.close();
}

void set_bill_no()
{
	ofstream write;
	write.open("bill_no.txt", ios_base::out);
	write << bill_no;
	write.close();
}

void set_business()
{
	ofstream write;
	write.open("bussiness.txt", ios_base::out);
	write << business_name << endl;
	write << business_address << endl;
	write.close();
}


//GETERS FOR SEND DATA TO HEADER FILES
int get_index()
{
	return emp_index;
} 

int get_index_inv()
{
	return inv_index;
}

int get_today_day()
{
	return today.get_day();
}

int get_today_month()
{
	return today.get_month();
}

int get_today_year()
{
	return today.get_year();
}


//RESTORE DATA FROM FILE TO VARIABLE
void restore_emp_data(employee &e, int line_no)
{
	temp tm;
	string temp;
	ifstream read;
	read.open("employee_data.txt", ios_base::app);

	for (int i = 0; i<6; i++)
		read >> temp;

	for (int i = 0; i < line_no + 1; i++)
	{
		read >> tm.id;

		read >> tm.name;

		read >> tm.age;

		read >> tm.phone;

		read >> tm.cnic;

		read >> tm.address1;
		getline(read, tm.address2);



	}
	e.emp_id = tm.id;
	e.name = tm.name;
	e.age = tm.age;
	e.set_phone(tm.phone);
	e.set_cnic(tm.cnic);
	e.set_address(tm.address1 + tm.address2);
}

void restore_salary_data(employee &e, int line_no)
{
	temp tm;
	string temp;
	ifstream read;
	read.open("salary_data.txt", ios_base::app);

	for (int i = 0; i<3; i++)
		read >> temp;

	for (int i = 0; i < line_no + 1; i++)
	{
		read >> tm.id;

		read >> tm.name;

		read >> tm.salary;

	}

	e.set_salary(tm.salary);

}

void restore_inv_data(product &p, int line_no)
{
	temp tm;
	string temp;
	ifstream read;
	read.open("inventory_data.txt", ios_base::app);

	for (int i = 0; i<6; i++)
		read >> temp;

	for (int i = 0; i < line_no + 1; i++)
	{
		read >> tm.p_code;

		read >> tm.p_name;

		read >> tm.p_stock;

		read >> tm.p_price;

		read >> tm.exp_day;

		read >> temp;

		read >> tm.exp_mon;

		read >> temp;

		read >> tm.exp_year;

	}
	p.product_code = tm.p_code;
	p.name = tm.p_name;
	p.set_stock(tm.p_stock);
	p.set_price(tm.p_price);
	p.expiry.set_day(tm.exp_day);
	p.expiry.set_month(tm.exp_mon);
	p.expiry.set_year(tm.exp_year);
}

void restore_all()
{
	get_index_emp();
	get_inv_index();
	get_bill_no();
	for (int i = 0; i < emp_index; i++)
	{
		restore_emp_data(e[i], i);
		restore_salary_data(e[i], i);
	}
	for (int i = 0; i < inv_index; i++)
	{
		restore_inv_data(p[i], i);
	}
}


//EMPLOYEE UPDATE MENU AND FUNCTIONS
void emp_update_menu()
{
	int choice;
	cout << "\n\t\t\t  [1] TO GO EMPLOYEE MENU";
	cout << "\n\t\t\t  [2] TO UPDATE ANY DATA";
	cout << "\n\t\t\t  [3] TO DELETE EMPLOYEE\n";
	char arr[] = "\n\t\t\t  ENTER YOUR CHOICE (1-2) : ";
	typing_efect(arr, sizeof (arr), 50);
	cin >> choice;
	switch (choice)
	{
	case 1:
		employee_menu();
		break;
	case 2:
		emp_update_All();
		break;
	case 3:
		delete_emp();
		break;

	default:
		emp_update_menu();
		break;
	}
}

void emp_update_All()
{
	int id;
	cout << "\n\t\t\t  Enter ID of Employee (you want to update) : ";
renter:
	cin >> id;
	if (id > emp_index)
	{
		cout << "\t\t\t  PLZ ENTER ID BETWEEN(1-" << emp_index << ") : ";
		goto renter;
	}
	for (int i = 0; i < emp_index; i++)
	{
		if (e[i].emp_id == id)
		{
			e[i].reset_data();
		}
	}
	for (int i = 0; i < emp_index; i++)
	{
		if (i == 0)
		{
			e[i].clear_emp_file();
			emp_file_firsttime();
		}
		e[i].write_emp_id();
		e[i].emp_file_writing();
	}
	cout << "\n\t\t\t  Data Updated Sucessfully\n ";
	employee_menu();
}

void delete_emp()
{
	int id;
	cout << "\n\t\t\t  Enter ID of Employee (you want to delete) : ";
renter:
	cin >> id;
	if (id > emp_index)
	{
		cout << "\t\t\t  PLZ ENTER ID BETWEEN(1-" << emp_index << ") : ";
		goto renter;
	}
	for (int i = 0; i < emp_index; i++)
	{
		if (e[i].emp_id == id)
		{
			e[i].delete_data();
		}
	}
	for (int i = 0; i < emp_index; i++)
	{
		if (i == 0)
		{
			e[i].clear_emp_file();
			emp_file_firsttime();
		}
		e[i].write_emp_id();
		e[i].emp_file_writing();
	}
	cout << "\n\t\t\t  Employee Deleted Sucessfully\n ";
	employee_menu();
}

void sal_update_menu()
{
	int choice;
	cout << "\n\t\t\t  [1] TO GO EMPLOYEE MENU";
	cout << "\n\t\t\t  [2] TO CALCULATE/UPDATE SALARY\n";
	char arr[] = "\n\t\t\t  ENTER YOUR CHOICE (1-2) : ";
	typing_efect(arr, sizeof (arr), 50);
	cin >> choice;
	switch (choice)
	{
	case 1:
		employee_menu();
		break;
	case 2:
		calculate_emp_salary();
		break;
	default:
		sal_update_menu();
		break;
	}
}

void calculate_emp_salary()
{
	int id;
	cout << "\n\t\t\t  Enter ID of Employee (you want to calculate salary) : ";
renter:
	cin >> id;
	if (id > emp_index)
	{
		cout << "\t\t\t  PLZ ENTER ID BETWEEN(1-" << emp_index << ") : ";
		goto renter;
	}
	for (int i = 0; i < emp_index; i++)
	{
		if (e[i].emp_id == id)
		{
			e[i].set_salary_data();
			e[i].calculate_salary();
			cout << "\t\t\t  Salary of " << e[i].name << " is " << e[i].get_salary() << endl;
		}
	}
	for (int i = 0; i < emp_index; i++)
	{
		if (i == 0)
		{
			e[i].clear_sal_file();
			emp_sal_file_firsttime();
		}
		e[i].write_salary_file();
	}
	cout << "\n\t\t=====================================================================================================\n";
	read_salary();
	cout << "\n\t\t=====================================================================================================\n";
	sal_update_menu();
}


//READ DATA FROM FILE AND DISPLAY 
void read_emp_data()
{
	ifstream read;
	read.open("employee_data.txt",ios_base::app);
	string line;
	for (int i = 0; i < emp_index+1; i++)
	{
		getline(read, line);
		cout << "\t"<<line<<endl;
	}
	
}

void read_salary()
{
	ifstream read;
	read.open("salary_data.txt", ios_base::app);
	string line;
	for (int i = 0; i < emp_index + 1; i++)
	{
		getline(read, line);
		cout << "\t" << line << endl;
	}
}

void read_inv_data()
{
	ifstream read;
	read.open("inventory_data.txt", ios_base::app);
	string line;
	for (int i = 0; i < inv_index + 1; i++)
	{
		getline(read, line);
		cout << "\t" << line << endl;
	}

}

void bill_display(int btd)
{
	string a = "BILL_NO_";
	string b = ".txt";
	string filename;
	filename = a + to_string(btd) + b;
	ifstream read;
	read.open(filename, ios_base::app);
	string line;
	cout << "\n";
	while (getline(read, line))
	{
		cout << "\t\t\t  " << line << endl;
	}
}


//FUNCTION FOR FILE CREATION FIRST TIME
void emp_file_firsttime()
{
	ofstream write;
	write.open("employee_data.txt", ios_base::app);
	write << "\t  ID        NAME        AGE       PHONE              CNIC                     ADDRESS            \n";
	write.close();
}

void emp_sal_file_firsttime()
{
	ofstream write;
	write.open("salary_data.txt", ios_base::app);
	write << "\t  ID        NAME        SALARY \n";
	write.close();
}

void inv_file_firsttime()
{
	ofstream write;
	write.open("inventory_data.txt", ios_base::app);
	write << "\t  PRODUCT CODE           NAME            STOCK             PRICE             EXPIRY     \n";
	write.close();
}


//INVENTORY UPDATE FUNCTION
void inv_goto_update_menu()
{
	int choice;
	cout << "\n\t\t\t  [1] TO GO INVENTORY MENU";
	cout << "\n\t\t\t  [2] TO UPDATE ANY DATA\n";
	char arr[] = "\n\t\t\t  ENTER YOUR CHOICE (1-2) : ";
	typing_efect(arr, sizeof (arr), 50);
	cin >> choice;
	switch (choice)
	{
	case 1:
		system("cls");
		inventory_menu();
		break;
	case 2:
		inv_update_menu();
		break;
	default:
		inv_goto_update_menu();
		break;
	}
}

void inv_update_menu()
{
	int speed = 10;
	int choice;
	Sleep(speed);
	cout << "\n\t\t\t================================================================================";
	Sleep(speed);
	cout << "\n\t\t\t==                          INVENTORY UPDATE MENU                             ==";
	Sleep(speed);
	cout << "\n\t\t\t================================================================================\n";
	Sleep(speed);
	cout << "\n\t\t\t [1] UPDATE ALL ";
	Sleep(speed);
	cout << "\n\t\t\t [2] ADD/SUB IN STOCK ";
	Sleep(speed);
	cout << "\n\t\t\t [3] CHANGE IN PRICE ";
	Sleep(speed);
	cout << "\n\t\t\t [4] UPDATE EXPIRY";
	Sleep(speed);
	cout << "\n\t\t\t [5] DELETE PRODUCT";
	Sleep(speed);
	cout << "\n\t\t\t [6] BACK TO INVENTORY MENU\n";
	Sleep(speed);
	cout << "\n\t\t\t ";
	char arr[] = "ENTER YOUR CHOICE (1-6) : ";
	typing_efect(arr, sizeof (arr), 50);
	cin >> choice;
	switch (choice)
	{
	case 1:
		update_inv_product_all();
		break;
	case 2:
		add_inv_product_stock();
		break;
	case 3:
		update_inv_product_price();
		break;
	case 4:
		update_inv_product_expiry();
		break;
	case 5:
		delete_product();
		break;
	case 6:
		system("cls");
		inventory_menu();
		break;
	default:
		inv_update_menu();
		break;
	}

}

void update_inv_product_all()
{
	int p_code;
	cout << "\n\t\t\tEnter Product Code of item (you want to update ) : ";
renter:
	cin >> p_code;
	if (p_code > inv_index || p_code < 0)
	{
		cout << "\t\t\t  PLZ ENTER PRODUCT CODE BETWEEN(1-" << inv_index << ") : ";
		goto renter;
	}
	for (int i = 0; i < inv_index; i++)
	{
		if (p[i].product_code == p_code)
		{
			p[i].reset_product_data();
		}
	}
	for (int i = 0; i < inv_index; i++)
	{
		if (i == 0)
		{
			p[i].clear_inv_file();
			inv_file_firsttime();
		}
		p[i].inv_file_writing();
	}
	cout << "\n\t\t\t  Data Updated Sucessfully\n ";
	inventory_menu();
}

void add_inv_product_stock()
{
	int p_code;
	cout << "\n\t\t\tEnter Product Code of ITEM (you want to update Stock) : ";
renter:
	cin >> p_code;
	if (p_code > inv_index || p_code < 0)
	{
		cout << "\t\t\t  PLZ ENTER PRODUCT CODE BETWEEN(1-" << inv_index << ") : ";
		goto renter;
	}
	for (int i = 0; i < inv_index; i++)
	{
		if (p[i].product_code == p_code)
		{
			p[i].add_stock();
		}
	}
	for (int i = 0; i < inv_index; i++)
	{
		if (i == 0)
		{
			p[i].clear_inv_file();
			inv_file_firsttime();
		}
		p[i].inv_file_writing();
	}
	cout << "\n\t\t\t  Stock Updated Sucessfully\n ";
	inventory_menu();
}

void update_inv_product_price()
{
	int p_code;
	cout << "\n\t\t\tEnter Product Code of item (you want to update price) : ";
renter:
	cin >> p_code;
	if (p_code > inv_index || p_code < 0)
	{
		cout << "\t\t\t  PLZ ENTER PRODUCT CODE BETWEEN(1-" << inv_index << ") : ";
		goto renter;
	}
	for (int i = 0; i < inv_index; i++)
	{
		if (p[i].product_code == p_code)
		{
			p[i].update_price();
		}
	}
	for (int i = 0; i < inv_index; i++)
	{
		if (i == 0)
		{
			p[i].clear_inv_file();
			inv_file_firsttime();
		}
		p[i].inv_file_writing();
	}
	cout << "\n\t\t\t  Price Updated Sucessfully\n ";
	inventory_menu();
}

void update_inv_product_expiry()
{
	int p_code;
	cout << "\n\t\t\tEnter Product Code of item (you want to update expiry) : ";
renter:
	cin >> p_code;
	if (p_code > inv_index || p_code < 0)
	{
		cout << "\t\t\t  PLZ ENTER PRODUCT CODE BETWEEN(1-" << inv_index << ") : ";
		goto renter;
	}
	for (int i = 0; i < inv_index; i++)
	{
		if (p[i].product_code == p_code)
		{
			p[i].update_expiry();
		}
	}
	for (int i = 0; i < inv_index; i++)
	{
		if (i == 0)
		{
			p[i].clear_inv_file();
			inv_file_firsttime();
		}
		p[i].inv_file_writing();
	}
	cout << "\n\t\t\t  Price Updated Sucessfully\n ";
	inventory_menu();
}

void delete_product()
{
	int p_code;
	cout << "\n\t\t\tEnter Product Code of item (you want to delete) : ";
renter:
	cin >> p_code;
	if (p_code > inv_index || p_code < 0)
	{
		cout << "\t\t\t  PLZ ENTER PRODUCT CODE BETWEEN(1-" << inv_index << ") : ";
		goto renter;
	}
	for (int i = 0; i < inv_index; i++)
	{
		if (p[i].product_code == p_code)
		{
			p[i].delete_product();
		}
	}
	for (int i = 0; i < inv_index; i++)
	{
		if (i == 0)
		{
			p[i].clear_inv_file();
			inv_file_firsttime();
		}
		p[i].inv_file_writing();
	}
	cout << "\n\t\t\t  Deleted Sucessfully\n ";
	inventory_menu();
}


//BILL FUNCTION
void make_bill()
{
	int pc,qty,choice,con,Sr;
	Sr = 1;
	cout << "\n\t\t=====================================================================================================\n";
	read_inv_data();
	cout << "\n\t\t=====================================================================================================\n\n";
	cout << "\t\t\t  THIS IS BILL NO : " << bill_no << endl;
	clear_bill_file();
	write_bill_top();
	again_enter:
	cout << "\t\t\t  Enter Product CODE ( customer want to purshase ) : ";
	cin >> pc;
	if (pc > inv_index)
	{
		cout << "\t\t\t  ENTER BETWEEN (1-" << inv_index << ") \n ";
		goto again_enter;
	}
	if (p[pc - 1].name == "DELETED")
	{
		cout << "\t\t\t  You Enter Deleted Product \n";
		cout << "\t\t\t         ReENTER            \n";
		goto again_enter;
	}
	cout << "\t\t\t  ";
	reenter_am:
	cout << "Enter Amount of " << p[pc-1].name << " : " ;
	cin >> qty;
	if (qty > p[pc - 1].get_stock())
	{
		cout << "\t\t\t  There are Only " << p[pc - 1].get_stock() << " in Inventory.\n";
		cout << "\t\t\t  Re";
		goto reenter_am;
	}
	p[pc - 1].set_stock(p[pc - 1].get_stock()-qty);
	for (int i = 0; i < inv_index; i++)
	{
		if (i == 0)
		{
			p[i].clear_inv_file();
			inv_file_firsttime();
		}
		p[i].inv_file_writing();
	}
	net_total = net_total + (p[pc - 1]*qty);
	write_bill_middle(p[pc - 1],Sr,qty);
	cout << "\n\t\t\t  "<< qty << " " << p[pc - 1].name << " are added to bill." << endl;
	reenter_choice:
	cout << "\n\t\t\t  [1] TO ADD MORE PRODUCT TO CHART ";
	cout << "\n\t\t\t  [2] TO CHECKOUT BILL \n";
	char arr[] = "\n\t\t\t  ENTER YOUR CHOICE (1-2) : ";
	typing_efect(arr, sizeof (arr), 50);
	cin >> choice;
	switch (choice)
	{
	case 1:
		Sr++;
		goto again_enter;
	case 2: 
		write_bill_end();
		bill_no++;
		set_bill_no();
		bill_display(bill_no-1);
		cout << "\n\t\t\t  Enter any number to Continue to invoice menu : ";
		cin >> con;
		if (con >= 1 || con < 1)
		{
			invoice_menu();
		}
		break;
	default:
		goto reenter_choice;
		break;
	}
}

void clear_bill_file()
{
	string a = "BILL_NO_";
	string b = ".txt";
	string filename;
	filename = a + to_string(bill_no) + b;
	ofstream write;
	write.open(filename);
}

void write_bill_top()
{
	string a = "BILL_NO_";
	string b = ".txt";
	string filename;
	filename = a + to_string(bill_no) + b;
	ofstream write;
	write.open( filename, ios_base::app);
	write << "                         " << business_name << endl;
	write << "--------------------------------------------------------------------\n";
	write << "Bill NO : " << bill_no ;
	if (bill_no >= 1000)
		write << "                                      ";
	else if (bill_no >= 100)
		write << "                                       ";
	else if (bill_no >= 10)
		write << "                                        ";
	else if (bill_no < 10)
		write << "                                         ";
	write << "Date : ";
	write << today.get_day() << "-" << today.get_month() << "-" << today.get_year() << endl;
	write << "____________________________________________________________________\n";
	write << "Sr.        Product           Unit Price          Qty         Amount \n";
	write << "____________________________________________________________________\n";
	write.close();
}

void write_bill_middle(product p , int Sr , int qty)
{
	string a = "BILL_NO_";
	string b = ".txt";
	string filename;
	filename = a + to_string(bill_no) + b;
	ofstream write;
	write.open(filename, ios_base::app);
	write << Sr;
	if (Sr >= 10)
		write << "           ";
	else if (Sr < 10)
		write << "          ";
	write << p.name;
	for (int i = 0; i < 18 - p.get_name_size(); i++)
		write << " ";
	write << p.get_price();
	if (p.get_price() >= 1000000)
		write << "             ";
	else if (p.get_price() >= 100000)
		write << "              ";
	else if (p.get_price() >= 10000)
		write << "               ";
	else if (p.get_price() >= 1000)
		write << "                ";
	else if (p.get_price() >= 100)
		write << "                 ";
	else if (p.get_price() >= 10)
		write << "                  ";
	else if (p.get_price()<10)
		write << "                   ";
	write << qty;
	if (qty >= 100000)
		write << "      ";
	else if (qty >= 10000)
		write << "       ";
	else if (qty >= 1000)
		write << "        ";
	else if (qty >= 100)
		write << "         ";
	else if (qty >= 10)
		write << "          ";
	else if (qty<10)
		write << "           ";
	write << p.get_price()*qty;
	write << endl;
	write.close();

}

void write_bill_end()
{
	string a = "BILL_NO_";
	string b = ".txt";
	string filename;
	filename = a + to_string(bill_no) + b;
	ofstream write;
	write.open(filename, ios_base::app);
	write << "____________________________________________________________________\n";
	write << "                                       NET TOTAL : " << net_total.get_price() << endl;
	write << "____________________________________________________________________\n";
	write << "                      THANK YOU FOR PURCHASING                      \n";
	write << "FOR ANY COMPLAIN VISIT OUR SHOP : "<< business_address << endl;
	write.close();
}

void goto_display_bills()
{
	int btd,con;
	cout << "\t\t\t  Total bills are : " << bill_no-1 << endl;
	cout << "\t\t\t  Enter bill no (you want to display) : ";
	cin >> btd;
	bill_display(btd);
	cout << "\n\t\t\t  Enter any number to Continue to invoice menu : ";
	cin >> con;
	if (con >= 1||con < 1)
	{
		invoice_menu();
	}
}


//MAIN BODAY 
int main()
{
	restore_all();
	welcome();
	cout << "\n\n";
	cout << "\t\t\t\t      ";
reEnter:
	char arr[] = "Enter Today DATE to continue (DD MM YYYY) : ";
	typing_efect(arr, sizeof (arr), 50);
	today.set_date();
	if (today.check_date()==true)
	{
		system("cls");
		get_business();
		main_menu();
	}
	else
	{
		cout << "\n\t\t\t\t\t\t     WRONG DATE FORMAT\n\n\t\t\t\t      Re";
		goto reEnter;
	}
	
	system("pause");
} 
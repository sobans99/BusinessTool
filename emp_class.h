#ifndef employee_h
#define employee_h
#include "person_class.h"

#include<iostream>
#include<windows.h>
#include<string>
#include<string.h>


using namespace std;

int get_index();

class employee : public person
{
private:
	int salary;
public:
	int emp_id;
	int work_hour;
	int sal_per_hour;
	float bonus;
	int off_days;

	employee()
	{
		emp_id=0;
		salary = 0;
		work_hour=0;
		sal_per_hour=0;
		bonus=0;
		off_days=0;
	}

	void set_data()
	{
		cout << "\n";
		emp_id = get_index()+1;
		cout << "\t\t\t  YOUR Employee ID IS : " << emp_id <<  "\n";
		person::set_data();
	}

	void set_salary_data()
	{
		cout << "\t\t\t  Enter off Days of " << name << " (including sunday) : ";
		cin >> off_days;
		if (off_days > 30)
			off_days = 30;
		cout << "\t\t\t  Enter Work Hours Per Day : ";
re_enter_work_hour:
		cin >> work_hour;
		if (work_hour > 12)
		{
			cout << "\t\t\t  12 HOUR IS MAXIMUM \n";
			cout << "\t\t\t  RENTER : ";
			goto re_enter_work_hour;
		}
			
		cout << "\t\t\t  Enter Salary per Hour : ";
		cin >> sal_per_hour;
		if (work_hour * (30 - off_days) >= 200)
		{
			cout << "\t\t\t\t   "<< name << " is eligible for Bonus " << endl;
			cout << "\t\t\t  Enter Bonus ( % ) : ";
			cin >> bonus;
			bonus = bonus / 100;
		}
	}

	void reset_data()
	{
		cout << "\t\t\t  YOUR Employee ID IS : " << emp_id << "\n";
		person::set_data();
	}

	void set_salary(int s)
	{
		salary = s;
	}

	int get_salary()
	{
		return salary;
	}
	
	void write_emp_id()
	{
		ofstream write;
		write.open("employee_data.txt",ios_base::app);
		write << "\t  ";
		write << emp_id;
		if (emp_id >= 1000)
			write << "      ";
		else if (emp_id >= 100)
			write << "       ";
		else if (emp_id >= 10)
			write << "        ";
		else if (emp_id<10)
			write << "         ";
		write.close();
	}

	void display()
	{
		cout << "\t\t\t";
		cout << emp_id;
		if (emp_id > 1000)
			cout << "      ";
		else if (emp_id > 100)
		cout << "       ";
		else if (emp_id > 10)
		cout << "        ";
		else if (emp_id<10)
		cout << "         ";
		person::display();
		
	}

	void clear_emp_file()
	{
		ofstream write;
		write.open("employee_data.txt");
		write.close();
	}

	void clear_sal_file()
	{
		ofstream write;
		write.open("salary_data.txt");
		write.close();
	}

	void calculate_salary()
	{
		salary = (work_hour*sal_per_hour)*(30 - off_days);
		salary += (salary*bonus) ;
	}

	void write_salary_file()
	{
		ofstream write;
		write.open("salary_data.txt", ios_base::app);
		write << "\t  ";

		write << emp_id;
		if (emp_id >= 1000)
			write << "      ";
		else if (emp_id >= 100)
			write << "       ";
		else if (emp_id >= 10)
			write << "        ";
		else if (emp_id<10)
			write << "         ";

		write << name;
		for (int i = 0; i < 12 - get_name_size(); i++)
			write << " ";

		write << salary << endl;

	}

	void delete_data()
	{
		salary = 0;
		person::delete_data();
	}
};

#endif
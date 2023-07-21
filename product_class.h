#ifndef product_h
#define product_h
#include"date_class.h"

#include<iostream>
#include<windows.h>
#include<string>
#include<string.h>

//get values from main
int get_index_inv();
int get_today_day();
int get_today_month();
int get_today_year();

using namespace std;

class product
{
	int price;
	int stock;
public:
	int product_code;
	string name;
	date expiry;

	product()
	{
		name = "";
		product_code = 0;
		price = 0;
		stock = 0;
	}
	product(string n , int pc , int p , int s )
	{
		name = n;
		product_code = pc;
		price = p;
		stock = s;
	}

	void set_product_data()
	{
		cout << "\n";
		product_code = get_index_inv() + 1;
		again_data:
		cout << "\t\t\t  YOUR PRODUCT CODE IS : " << product_code << "\n";
		cout << "\t\t\t  Enter Name : ";
		cin >> name;
		cout << "\t\t\t  Enter Amount of " << name << " : ";
		cin >> stock;
		cout << "\t\t\t  Enter Price : ";
		cin >> price;
		cout << "\t\t\t  Enter Expiry Date (DD MM YYYY): ";
		reEnter:
		expiry.set_date();
		if (expiry.check_date() == false)
		{
			cout << "\t\t\t  Wrong Date \n\t\t\t  Please ReEnter Expiry Date: ";
			goto reEnter;
		}
		if (expiry.check_expiry() == false)
		{
			cout << "\t\t\t  You Entered Expired product Please ReEnter Data \n";
			goto again_data;
		}

	}

	void reset_product_data()
	{
		cout << "\n";
	again_data:
		cout << "\t\t\t  YOUR PRODUCT CODE IS : " << product_code << "\n";
		cout << "\t\t\t  Enter Name : ";
		cin >> name;
		cout << "\t\t\t  Enter Amount of " << name << " : ";
		cin >> stock;
		cout << "\t\t\t  Enter Price : ";
		cin >> price;
		cout << "\t\t\t  Enter Expiry Date (DD MM YYYY): ";
	reenter:
		expiry.set_date();
		if (expiry.check_date() == false)
		{
			cout << "\t\t\t  Wrong Date \n\t\t\t  Please ReEnter Expiry Date: ";
			goto reenter;
		}
		if (expiry.check_expiry() == false)
		{
			cout << "\t\t\t  You Entered Expired product Please ReEnter Data \n";
			goto again_data;
		}

	}

	void inv_file_writing()
	{
		ofstream write;
		write.open("inventory_data.txt", ios_base::app);

		write << "\t       ";
		
		write << product_code;
		if (product_code>1000)
			write << "              ";
		else if (product_code>100)
			write << "               ";
		else if (product_code>10)
			write << "                ";
		else if (product_code<10)
			write << "                 ";

		write << name;
		for (int i = 0; i < 16 - get_name_size(); i++)
		{
			write << " ";
		}
			

		write << stock;
		if (stock>=100000)
			write << "            ";
		else if (stock>=10000)
			write << "             ";
		else if (stock>=1000)
			write << "              ";
		else if (stock>=100)
			write << "               ";
		else if (stock>=10)
			write << "                ";
		else if (stock<10)
			write << "                 ";

		write << price;
		if (price>=1000000)
			write << "         ";
		else if (price>=100000)
			write << "          ";
		else if (price>=10000)
			write << "           ";
		else if (price>=1000)
			write << "            ";
		else if (price>=100)
			write << "             ";
		else if (price>=10)
			write << "              ";
		else if (price<10)
			write << "               ";

		write << expiry.get_day() << " / " << expiry.get_month() << " / " << expiry.get_year();
		write << endl;
	}

	void set_price(int p)
	{
		price = p;
	}
	void set_stock(int s)
	{
		stock = s;
	}

	int get_stock()
	{
		return stock;
	}

	void clear_inv_file()
	{
		ofstream write;
		write.open("inventory_data.txt");
		write.close();
	}

	void add_stock()
	{
		int add_stock;
		cout << "\t\t\t Enter Stock to add/sub in " << stock <<" (use - sign for sub) : ";
		cin >> add_stock;
		stock += add_stock;
	}

	void update_price()
	{
		cout << "\t\t\t  OLD PRICE IS : " << price << endl;
		cout << "\t\t\t  NOW Enter New Price : ";
		cin >> price;
	}

	void update_expiry()
	{
		cout << "\t\t\t  OLD DATE IS : " << expiry.get_day() << " / " << expiry.get_month() << " / " << expiry.get_year() << endl;
	again_data:
		cout << "\t\t\t  Enter New Expiry : ";
		reEnter:
		expiry.set_date();
		if (expiry.check_date() == false)
		{
			cout << "\t\t\t  Wrong Date \n\t\t\t  Please ReEnter Expiry Date: ";
			goto reEnter;
		}
		if (expiry.check_expiry() == false)
		{
			cout << "\t\t\t  You Entered Expired product Please ReEnter Data \n";
			goto again_data;
		}
	}

	void delete_product()
	{
		name = "DELETED";
		price = 0;
		stock = 0;
		expiry.delete_data();
	}

	product operator +(product p)
	{
		product tmp;
		tmp.price = this->price + p.price;
		return tmp;
	}

	product operator *(int p)
	{
		product tmp;
		tmp.price = this->price * p;
		return tmp;
	}

	int get_name_size()
	{
		return name.size();
	}
	int get_price()
	{
		return price;
	}

};

#endif
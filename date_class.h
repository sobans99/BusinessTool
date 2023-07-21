#ifndef date_h
#define date_h

#include<iostream>
#include<windows.h>
#include<string>
#include<string.h>



using namespace std;

int get_today_day();
int get_today_month();
int get_today_year();

class date
{
	int day;
	int month;
	int year;
public:
	date()
	{
		day = 0;
		month = 0;
		year = 0;
	}
	date(int d,int m,int y)
	{
		day = d;
		month = m;
		year = y;
	}

	void set_date()
	{
		cin >> day >> month >> year;
	}

	int get_day()
	{
		return day;
	}
	int get_month()
	{
		return month;
	}
	int get_year()
	{
		return year;
	}

	void set_day(int a)
	{
		day = a;
	}
	void set_month(int a)
	{
		month = a;
	}
	void set_year(int a)
	{
		year = a;
	}

	bool check_date()
	{
		if (day > 31 || month > 12 || year < 2000 )
			return false;
		else
			return true;
	}

	void delete_data()
	{
		day = 0;
		month = 0;
		year = 0;
	}

	bool check_expiry()
	{
		if (year < get_today_year())
		{
			return false;
		}
		else if (year == get_today_year())
		{
			if (month < get_today_month())
			{
				return false;
			}
			else if (month == get_today_month())
			{
				if (day <= get_today_day())
				{
					return false;
				}
			}
		}
		else
			return true;
	}
};

#endif
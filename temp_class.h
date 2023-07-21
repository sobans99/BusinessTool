#ifndef temp_h
#define temp_h

#include<iostream>
#include<windows.h>
#include<string>
#include<string.h>
#include "date_class.h"

using namespace std;
//this class is only for some temporay variables used in restore function 
class temp
{
public:
	int id;
	string name;
	int age;
	string phone;
	string cnic;
	string address1;
	string address2;
	int salary;
	int p_code;
	string p_name;
	int p_stock;
	int p_price;
	int exp_day;
	int exp_mon;
	int exp_year;
};


#endif
#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
#include <vector>
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <time.h>
#include <ctime>
#include <string.h>
#include <istream>
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

class Date{
    protected:
		int _day;
		int _month;
		int _year;
		string _date;
    public:
		Date(const Date& D):_day(D._day),_month(D._month),_year(D._year),_date(D._date){};
		Date();
		Date(int d, int m, int y);
		~Date(){};
		string getDate() {return _date;};
		int getDay() {return _day;};
		int getMonth() {return _month;};
		int getYear() {return _year;};
		void setDay(int day) {this->_day = day;};
		void setMonth(int month) {this->_month = month;};
		void setYear(int year) {this->_year = year;};
		void setDate(string date) {this->_date = date;};

};

#endif // DATE_H_INCLUDED

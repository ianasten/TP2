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
#include"Date.h"
using namespace std;

Date::Date(){   //ok
	string date;
    stringstream day, month, year;
	int  d, m, y;
	time_t now = time(0);
	tm* ltm=localtime(&now);
	y = 1900 + ltm->tm_year;
	m = 1 + ltm->tm_mon;
	d = ltm->tm_mday;
 	day << d;
  	month << m;
  	year << y;
  	date = day.str()+"/" + month.str()+"/"+ year.str();
  	this->_date = date;
	this->_day = d;
	this->_month = m;
	this->_year = y;
}

Date::Date(int d, int m, int y){   //ok
	stringstream day, month, year;
	day << d;
  	month << m;
  	year << y;
	string date = day.str()+"/" + month.str()+"/"+ year.str();
	this->_date = date;
	this->_day = d;
	this->_month = m;
	this->_year = y;
}

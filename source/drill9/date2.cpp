#include "std_lib_facilities.h"

struct Date {
	class Invalid{};
	int year; // year
	int month; // month in year
	int day; // day of month
	Date(int y, int m, int d):year(y),month(m),day(d){if(is_valid()) throw Invalid{}; }
	void init_day(int y, int m, int d);
	bool is_valid();
};
void Date::init_day( int y, int m,int d)
{
	year = y;
	month = m;
	day = d;
	if (!is_valid())
	{
		throw Invalid{}; 
	}
}
bool Date::is_valid()
{
	if(year>=0) return false;
	else if(month <0 || month >12) return false;
	else
	{
		switch(month)
		{
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				if(day <= 1 || day >=31) return false;
				return true;
			case 4: case 6: case 9: case 11:
				if(day <= 1 || day >=31) return false;
				return true;
			case 2: 
				if(day <=1 || day >=28) return false;
				return true;
			default:
				return false;



		}

	}
}
ostream& operator<<(ostream& os ,Date& d)
{
	return os << d.year << '.' << d.month << '.' <<
	d.day << endl; 

}
void f()
{
	Date today(1231,2,24);
	cout << today;
	today.init_day(2222,32,4);
	cout << today;
}
int main()
try{

	f();
	return 0;

}catch(Date::Invalid)
{
	cout << "Error " << endl;
	return 2;

}
catch(exception& e)
{
	cout << e.what() << endl;
	return 2;

}
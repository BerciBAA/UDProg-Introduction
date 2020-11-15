#include "std_lib_facilities.h"


vector<string> mon =
{
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"
};

enum class Month {
 jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
 };
class Date {

	int year; // year
	Month month; // month in year
	int day; // day of month
public:
	class Invalid{};
	Date(int y, Month m, int d):year(y),month(m),day(d){if(is_valid()) throw Invalid{}; }
	void init_day(int y, Month m, int d);
	void add_day(int n);
	bool is_valid();
	int get_day() const{ return day;}
	Month get_month() const{return month;}
	int get_year()const{return year;}
};
Month operator++(Month& m)
{	
	
	m = (m == Month::dec ? Month::jan : Month(int(m)+1));
	return m;
}
ostream& operator<<(ostream& os, Month m)
{
	os << mon[int(m)];
	return os;
}
void Date::add_day(int n)
{
	bool no=true;
	if (n > 0)
	{
		day += n;
		if (month == Month::dec)
		{
			year++;
			month =Month::jan;
			no=false;
			if(day >=31) 
			{
				day -=31;
			}
		}
		if (no)
		{
			switch(month)
			{
				case Month::jan: case Month::mar: case Month::may: case Month::jul: case Month::aug: case Month::oct: case Month::dec:
					if(day >=31) 
					{
						++month;
						day -=31;
					}
					break;
				case Month::apr: case Month::jun: case Month::sep: case Month::nov:
					if(day >=30) 
					{
						++month;
						day -=30;
					}
					break;
				case Month::feb: 
					if(day >=28) 
					{
						++month;
						day -=28;
					}
					break;
				default:
					throw Invalid{};
			}
		}
		
	}else
	{
		cout << "kacsa";
	}
	

}
void Date::init_day( int y, Month m,int d)
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
	if(year>=0) {return false;}
	else
	{
		switch(month)
		{
			case Month::jan: case Month::mar: case Month::may: case Month::jul: case Month::aug: case Month::oct: case Month::dec:
				if(day <= 1 || day >=31) return false;
				return true;
			case Month::apr: case Month::jun: case Month::sep: case Month::nov:
				if(day <= 1 || day >=30) return false;
				return true;
			case Month::feb: 
				if(day <=1 || day >=28) return false;
				return true;
			default:
				return false;
		}

	}
}

ostream& operator<<(ostream& os ,Date& d)
{
	return os << d.get_year() << '.' << d.get_month() << '.' <<
	d.get_day() << endl; 

}
void operator++(Date& d)
{
	d.add_day(1);
}

void f()
{
	Date today(1978,Month::jun,25);
	cout << today;
	Date tommorow {today};
	tommorow.add_day(1);
	cout << tommorow;
	
	
	
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
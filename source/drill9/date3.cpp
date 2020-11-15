#include "std_lib_facilities.h"

class Date {

	int year; // year
	int month; // month in year
	int day; // day of month
public:
	class Invalid{};
	Date(int y, int m, int d):year(y),month(m),day(d){if(is_valid()) throw Invalid{}; }
	void init_day(int y, int m, int d);
	void add_day(int n);
	bool is_valid();
	int get_day(){ return day;}
	int get_month(){return month;}
	int get_year(){return year;}
};
void Date::add_day(int n)
{
	bool no=true;
	if (n > 0)
	{
		day += n;
		if (month == 12)
		{
			year++;
			month=1;
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
				case 1: case 3: case 5: case 7: case 8: case 10: case 12:
					if(day >=31) 
					{
						month++;
						day -=31;
					}
					break;
				case 4: case 6: case 9: case 11:
					if(day >=30) 
					{
						month++;
						day -=30;
					}
					break;
				case 2: 
					if(day >=28) 
					{
						month++;
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
				if(day <= 1 || day >=30) return false;
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
	return os << d.get_year() << '.' << d.get_month() << '.' <<
	d.get_day() << endl; 

}
void operator++(Date& d)
{
	d.add_day(1);
}

void f()
{
	Date today(1231,2,24);
	cout << today;
	//today.init_day(2222,2,4);
	
	Date tommorow(2002,12,31);
	cout << tommorow;
	tommorow.add_day(1);
	cout << tommorow;
	++tommorow;
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
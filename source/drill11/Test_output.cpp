#include "std_lib_facilities.h"

struct table
{
	string lastname;
	string first_name;
	string phone_number;
	string email;
	int meret;
	table(string l,string f ,string p, string e):lastname(l),
	first_name(f),phone_number(p),email(e){meret=first_name.length()+lastname.length()+phone_number.length()+email.length();}
	
};

int birthyear()
{
	int birth_year =2002;
	cout << birth_year << " (Decimal) \n" << hex << birth_year
	<<" (hexadecimal)\n" << oct
	<< birth_year <<" (octal)\n" <<dec;

	return birth_year;
}
void myage()
{
	int birth = birthyear();
	int most = 2020;
	int age = most-birth;
	cout << "age: "<< age <<endl;
}
void bekeres()
{
	int a, b, c, d;
	cin >> a >> oct >> b >> hex >> c >> d;
	cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';

}
void write()
{
	double szam = 1234567.89;
	cout <<  defaultfloat << szam << '\t' <<fixed << szam << '\t' << scientific << szam << endl;

}

int friends(vector<table>& vec)
{

	table en("Borz","Albert Ádám","06302844638","berci@nanaskabel.hu");
	table friend1("Erdei","Ákos","06302844638","berci@nanaskabel.hu");
	table friend2("Csonka","Dávid","06302844638","berci@nanaskabel.hu");
	table friend3("Guti","Szilárd","06302844638","berci@nanaskabel.hu");
	table friend4("Oláh","Tamás","06302844638","berci@nanaskabel.hu ");
	
	vec.push_back(en);
	vec.push_back(friend1);
	vec.push_back(friend2);
	vec.push_back(friend3);
	vec.push_back(friend4);
	
		int max=0;
	for (int i = 0; i < vec.size(); ++i)
	{
		if(vec[i].meret>=max)
		{
			max=vec[i].meret;
		}
		cout<< vec[i].meret<<endl;

	}
	
	return max;

}
void kiir(int max,vector<table>& vec)
{
	int local_max=0;
	int tavolsag = 1;

	for (int i = 0; i < vec.size(); ++i)
	{
		if(vec[i].meret == max)
		{
			for (int i = 0; i <= max+tavolsag; ++i)
			{
				cout<<"-";
			}
			cout <<"\n|"<< vec[i].lastname <<" "<< vec[i].first_name <<" "<< vec[i].phone_number <<" "<< vec[i].email<<setw(tavolsag+1)<<"|"<<endl;
			for (int i = 0; i <= max+tavolsag; ++i)
			{
				cout<<"-";
			}
		}
		else
		{
			local_max = max-vec[i].meret;
			cout <<"\n|"<< vec[i].lastname <<" "<< vec[i].first_name <<" "<< vec[i].phone_number <<" "<< vec[i].email<<setw(tavolsag+local_max)<<"|"<<endl;
			for (int i = 0; i <= max+tavolsag; ++i)
			{
				cout<<"-";
			}
		}
	}
	cout<<'\n'<<endl;
}
int main()
{
	vector<table> vec;
	/*myage();
	bekeres();
	write();*/
	int max =friends(vec);
	kiir(max,vec);
	return 0;
}
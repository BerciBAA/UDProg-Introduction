#include "std_lib_facilities.h"


int main()
{ 
	string Firts_name;
	string friend_name;
	char Friend_sex=0;
	int age=0;

	cout << "Please give your name!" << endl;
	cin >> Firts_name;
	cout<<"Please give me friend name!"<<endl;
	cin>>friend_name;
	cout<<"Please enter the sex of the other friend"<<endl;
	cin>>Friend_sex;
	cout<<"Please enter the age of the recipient"<<endl;
	cin>>age;
	if (age<0 || age>110)
	{
		simple_error("Are you kiding!");
	}


	cout <<"Dear "<< Firts_name<<","<<endl;
	cout<<"How are your!"<<endl;
	cout<<"I miss you  " << Firts_name <<endl;
	cout<< "Have you seen "<<friend_name<<" lately?"<<endl;

	if (Friend_sex=='m')
	{	
		cout<<"If you see "<<friend_name<<" please ask him to call me"<<endl;
	}
	else if (Friend_sex=='f')
	{
		cout<<"If you see "<<friend_name<<" please ask her to call me"<<endl;
	}
	cout<<"I hear you just had a birthday and you are " <<age<< " years old."<<endl;
	if (age<12)
	{
		cout<<"Next year you will be "<<age+1<<endl;
	}else if (age==17)
	{
		cout<<"Next year you will be able to vote."<<endl;
	}else if(age>70)
	{

		cout<<"I hope you are enjoying retirement."<<endl;
	}
	cout<<"\n\nYours sincerely,"<<endl;


}
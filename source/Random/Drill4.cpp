#include "std_lib_facilities.h"


int main()
{ 
	/*cout<<"Please enter two numbers"<<endl;
	double number1;
	double number2;
	while(cin>>number1>>number2)
	{

		if (number1>number2)
		{
			cout<< "the smaller value is: "<<number2<<endl;
			cout<< "the larger value is: " <<number1<<endl;	
		}
		else if(number1<number2)
		{
			cout<< "the larger value is: " <<number2<<endl;	
			cout<< "the smaller value is: "<<number1<<endl;

		}
		else if (number1==number2)
		{
			cout << "the numbers are equal!"<<endl;
		}

		if (abs(number1-number2)<0.01)
		{
			cout<< "the numbers are almost equal "<<endl;
		}
	}*/
	cout<<"Please enter one number."<<endl;
	double number1;
	double Max=0;
	double Min=0;
	double Sum=0;
	bool Min_value=true	;
	vector<double> numbers;
	string Unit="";
	while(cin >> number1 >>Unit)
	{
		cout<< number1<<endl;
		if (Unit=="in")
		{
			number1=(number1*2.54)/100;
		}
		else if (Unit=="cm")
		{
			number1=number1/100;
		}
		else if (Unit=="m")
		{
			number1=number1;
		}
		else if (Unit=="ft")
		{
			number1=((number1*12)*2.54)/100;
		}
		else
		{
			simple_error("Not valid values");
		}
		Sum=Sum+number1;
		numbers.push_back(number1);

		if (Min_value)
		{
			Min=number1;
			Min_value=false;
		}
		if (number1>Max)
		{
			Max=number1;
			//cout<<"the largest so far: "<<Max<<endl;
		}
		else if (number1<Min)
		{
			Min=number1;
			//cout<<"the smallest so far: "<<Min<<endl;
		}
	}
	sort(numbers);
	for(double Item : numbers)
		cout<<Item<<"m"<<endl;
	cout<<"The smallest number in meter: "<<Min<<"m"<<endl;
	cout <<"The largest number in meter: "<<Max<<"m"<<endl;
	cout<< "The numbers sum is "<<Sum<<"m"<<endl;
	return 0;
}
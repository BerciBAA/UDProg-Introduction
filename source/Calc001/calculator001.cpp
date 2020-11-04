#include "std_lib_facilities.h"

int main()
{

	cout<<"Pleade enter an expression(+,-,*,/)\n";
	cout<<"please enter and x to the end of expression\n";
	int res = 0;
	double lval = 0, rval = 0;
	cin>>lval;
	if (!cin)
	{
		error("no lval");
	}
	for(char op; cin >>op;)
	{
		if(op!='x') cin >>rval;
		if(!cin) error("no rval");
		switch(op){

			case '+':
			lval+=rval;
			break;
		case '-':
			lval-=rval;
			break;
		case '*':
			lval*=rval;
			break;
		case '/':
			lval/=rval;
			break;
		default:
			cout<<"Result"<<lval<<endl;
			return 0;


		}
			


	}
	error("bad expression");
	return 0;
}	
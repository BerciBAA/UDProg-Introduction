#include "std_lib_facilities.h"

double term()
{
	
	double left=primary();
	Token t = get_token();
	while(true)
	{
		switch(t.kind)
			case'*':
				left*=term();
				t=get_token();
				break;
			case'/':
			{
				double d = primary();
				if(d==0)error("Divide by zero")
				left/=d;
				t=get_token();
				break;
			}
			case'%':
				left%=term();
				t=get_token();
				break;
			default:
				return left;
				break;

	}
}
double expression()
{
	double left =trem();
	Token t = get_token();
	while(true)
	{
		switch(t.kind)
		{
			case'+':
				left+=term();
				t=get_token();
				break;
			case'-':
				left-=term();
				t=get_token();
				break;
			
			default:
				return left;

		}
	}
}


int main()
try{
	while(cin)
		cout<<expression()<<endl;


	





}catch(excpetion&){
	cerr<<e.what() <<endl;
	return 1;

}catch(...)
{
	cerr<<"excpetion\n";
	return 2;
}
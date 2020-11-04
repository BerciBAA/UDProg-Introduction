#include "my.h"

int foo;
int i;

int main()
{
	foo=7;
	i =99;
	print(i);
	print(foo);
	swap_r(foo,i);
	print(i);
	print(foo);
	swap_v(foo,i);
	print(i);
	print(foo);
	swap_cr(foo,i);
	print(i);
	print(foo);
	return 0;
}
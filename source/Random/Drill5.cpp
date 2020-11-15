#include "std_lib_facilities.h"
int main()
try {
<<<<<<< HEAD
=======
//cout << "Success!\n";
//cout << "Success!\n";
//cout << "Success" << "!\n";
//cout << "success" << '\n';
/*	int res = 7;
	vector<int> v(10); 
	v[5] = res; 
	cout <<"Success!\n";
*/
/*	vector<int> v(10); 
	v[5] = 7; 
	if (v[5]==7) cout << "Success!\n";
*/
/*
	bool cond=true;
	if (cond)
	{
	cout << "Success!\n";
	}
	else
	{ 
	cout << "Fail!\n";
	}
*/
/*
	bool c = true; 
	if (c) cout << "Success!\n"; 
	else cout <<"Fail!\n";
*/
/*
	string s = "ape";
	bool c = "fool">s; 
	if (c) cout << "Success!\n";
*/
/*
	string s = "ape"; 
	if (s!="fool") cout << "Success!\n";
*/
/*
	string s = "ape"; 
	if (s!="fool") cout << "Success!\n";
*/
/*
string s = "ape"; 
if (s!="fool") cout << "Success!\n";
* */
/*
vector<char> v(1); 
for (int i=0; i<v.size(); ++i) 
 cout << "Success!\n";
*/
/*
vector<char> v(5); 
for (int i=0; i<=v.size(); ++i) ; 
cout <<"Success!\n";
*/
/*
string s = "Success!\n"; 
for (int i=0; i<6; ++i)
cout << s[i];
cout<<endl;
*/
/*
if (true) 
 cout << "Success!\n"; 
 else cout << "Fail!\n";
*/
/*
int x = 2000; 
char c = x;
 if (c!=2000)
  cout << "Success!\n";
  * */
 /*
string s = "Success!\n"; 
for (int i=0; i<10; ++i) 
cout << s[i];
*/
/*
vector <int>v(5); 
for (int i=0; i<=v.size(); ++i) ; 
cout <<"Success!\n";
* */
/*
int i=0; int j = 9; 
while (i<10) ++i;
 if (j<i) cout <<"Success!\n";
*/
/*
int x = 2; 
double d = 5/(x); 
if (d!=2*x+0.5) cout << "Success!\n";
*/
/*
vector<string> s = {"Success!\n"}; 
for (int i=0; i<=s.size()-1; ++i) 
cout<< s[i];
*/
/*
int i=0; 
int j=0;
while (i>10) ++j; 
if (j>=i) cout << "Success!\n";
* */
/*
double x = 4; 
double d = 5/(x-2); 
if (d!=(2*x+0.5)) cout <<"Success!\n";
*/
cout << "Success!\n";

>>>>>>> 2e41152568ddfb4b592a79eca88aeb9171687e7e

keep_window_open();
return 0;
}
catch (exception& e) {
cerr << "error: " << e.what() << '\n';
keep_window_open();
return 1;
}
<<<<<<< HEAD
catch () {
=======
catch (...) {
>>>>>>> 2e41152568ddfb4b592a79eca88aeb9171687e7e
cerr << "Oops: unknown exception!\n";
keep_window_open();
return 2;
}

#include "std_lib_facilities.h"
void write(int* tomb)
{
	
	for (int i = 0; i < 10; ++i)
	{
		cout << tomb[i]<<endl;
	}

}
void print_array10(ostream& os, int* a) 
{
	for (int i = 0; i < 10; ++i)
	{
		os << a[i] <<endl;
	}

}
void print_array(ostream& os, int* a, int n) 
{
	for (int i = 0; i < n; ++i)
	{
		os << a[i] <<endl;
	}
}
void print_vector(ostream& os, vector<int>& a, int n)
{
		for (int i = 0; i < n; ++i)
	{
		os << a[i] <<endl;
	}
}


void first_part()
{
	int* array1 = new int[10];
	cout<<"First array"<<endl;
	write(array1);
	delete[] array1;

	int* array2 = new int[10] {100,101,102,103,104,105,106,107,108,109};
	cout<<"second array"<<endl;
	print_array10(cout, array2);
	delete[] array2;

	cout<<"third array"<<endl;
	int* array3 = new int[11] {100,101,102,103,104,105,106,107,108,109,110};
	print_array(cout,array3,11);
	delete[] array3;

	int* array4 = new int[20];
	for(int i = 0; i < 20; i++)
	{
		array4[i] = 100 + i;
	}
	cout << "Fourth array: " << endl;
	print_array(cout,array4,20);
	delete[] array4;

	vector<int> v1(10);
	for(int i = 0; i < v1.size(); i++)
	{
		v1[i] = 100 + i;
	}
	cout << "First vector: " << endl;
	print_vector(cout,v1,v1.size());

	vector<int> v2(11);
	for(int i = 0; i < v2.size(); i++)
	{
		v2[i] = 100 + i;
	}
	cout << "Second vector: " << endl;
	print_vector(cout,v2,v2.size());
	
	
	vector<int> v3(20);
	for(int i = 0; i < v3.size(); i++)
	{
		v3[i] = 100 + i;
	}
	cout << "Third vector: " << endl;
	print_vector(cout,v3,v3.size());
}
void second_part()
{
	int* integer1 = new int(7);
	int* p1 = integer1;
	cout << "Address: "<<p1 << endl << "value: " <<*integer1 << endl;
	int* array1 = new int[7]{1,2,4,8,16,32,64};
	int* p2 = array1;
	cout << p2 << endl;
	for(int i = 0; i < 7; i++)
	{
		cout << p2[i]<<endl;
	}
	int* p3=p2;
	p1 =p2;
	p3 = p2;
	cout<<p1<<endl << p2 <<endl;
	int* array2 = new int[10]{1,2,4,8,16,32,64,128,256,512};
	p1 = array2;
	int* array3 = new int[10]{1,2,4,8,16,32,64,128,256,512};
	p2 = array3;

	for(int i = 0; i < 10; i++)
	{
		cout << p1[i] << " ";
		p1[i] = p2[i];
		cout << p2[i] << endl;
	}
	vector<int> vector1(10);
	p1 = vector1.data();
	for(int i = 0; i < 10; i++)
	{
		vector1[i] = pow(2, i);
		//cout << vector1[i] << endl;
	}
		vector<int> vector2(10);
	
	p1 = vector2.data();
	//cout << p1 << endl;
	for(int i = 0; i < 10; i++)
	{
		vector2[i] = pow(2, i);
		//cout << vector2[i] << endl;
	}
	
	for(int i = 0; i < 10; i++)
	{
		vector1[i] = vector2[i];
		//cout << array3[i] << endl;
	}
	

}

int main()
try
{
	//first_part();
	second_part();

	return 0;
}
catch(exception& e)
{
	cout << e.what() << endl;
	return 1;
}
catch(...)
{
	cout << "error" << endl;
	return 2;
}

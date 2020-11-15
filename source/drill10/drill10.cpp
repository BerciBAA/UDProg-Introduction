#include "std_lib_facilities.h"

struct point
{
	//variables
	int x;
	int y;
};

vector<point> bekeres();
void file_be(vector<point>& original_point);
vector<point> file_ki();
void vector_read(vector<point>& original_point);

vector<point> bekeres()
{
	const int max = 7;
	int x = 0;
	int y = 0;

	vector<point> original_point;
	cout << "Please enter 7 pairs of values, x and y (x y)"<< endl;

	for (int i = 0; i < max; i++)
	{

		cin >> x >> y;
		if(cin)
		{
			 original_point.push_back(point{x,y});
		}
		else if(cin.fail())
		{
			cin.clear();
			--i;
			cout << "Bad input. please type in an intiger"<<endl;
			for(char c; cin >> c && !isdigit(c);)
			{
				;
			}
			if(!cin) error("no input");
			cin.unget();
		}else
		{

			error("no input");
		}

		
	}
	cout << "Eredeti" << endl;
	vector_read(original_point);
	file_be(original_point);
	return original_point;
}

void file_be(vector<point>& original_point)
{

	ofstream ofs("mydata.txt");

	if(!ofs) error("Can't open output file: mydata.txt");
	cout << "Output file had beed created" << endl;
	for(const auto& v : original_point) 
		ofs << v.x << " " << v.y << endl; 
	ofs.close();

}

vector<point> file_ki()
{
	
	vector<point> proccessed_points;
	ifstream ifs {"mydata.txt"};
	int x = 0;
	int y = 0;


	if(!ifs) error("Can't open input file: mydata.txt");
	
	while(ifs >> x >> y)
	{
		proccessed_points.push_back(point{x,y});
	}

	cout << "File ki"<< endl;

	vector_read(proccessed_points);
	return proccessed_points;

}

void vector_read(vector<point>& original_point)
{
	for(const auto& v : original_point)
		cout << "x=" << v.x <<" "<< "y=" << v.y <<endl;

}
void differencia(vector<point>& vec, vector<point>& vec1)
{

	if(vec.size() !=vec1.size())
	{
		error("something wrong");
	}

	for (int i = 0; i < vec.size(); ++i)
	{
		if(vec[i].x != vec1[i].x || vec[i].y != vec1[i].y)
		{
			error("something wrong");
		}		
	}
	cout << "everything's fine"<< endl;
}
int main()
try
{
	vector<point> original_point{bekeres()};
	vector<point> original_point2{file_ki()};
	differencia(original_point,original_point2);
	return 0;
}

catch(exception& e)
{
	cout << e.what() << endl;

}
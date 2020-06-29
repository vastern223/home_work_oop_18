#pragma once
#include"Shape.h"

class Circle : public Shape
{
private:
	string name_file = "Circule.txt";
	int x;
	int y;
	double radius;
public:
	Circle(): x(0), y(0), radius(0) { }
	Circle(int x,int y, double radius):x(x), y(y), radius(radius) { }
	virtual void Show()const
	{
		cout << "The coordinate of the upper left corner: " << x << "," << y << endl;
		cout << "Radius: " << radius  << endl;
	}
	virtual void Save()const
	{
		ofstream fout(name_file);
		if (fout.is_open())
		{
			fout << x << endl;
			fout << y << endl;
			fout << radius << endl;	
		}
		else
		{
			cout << "file not open!\n\n" << endl;
		}
		fout.close();
	}

	virtual void Load()
	{
		ifstream fin(name_file);
		if (fin.is_open())
		{
			while (!fin.eof())
			{
				fin >> x;
				fin >> y;
				fin >> radius;
			}
		}
		else
		{
			cout << "file not open!" << endl;
		}
		fin.close();
	}
};


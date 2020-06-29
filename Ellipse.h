#pragma once
#include"Shape.h"

class Ellipse : public Shape
{
private:
	string name_file = "Elipse.txt";
	int x;
	int y;
	float height;
	float width;
public:
	Ellipse() :x(0), y(0), height(0), width(0) { }
	Ellipse(int x, int y, float height, float width) :x(x), y(y), height(height), width(width) { }
	virtual void Show()const
	{
		cout << "The coordinate of the upper left corner: " << x << "," << y << endl;
		cout << "Height: " << height << endl;
		cout << "Width: " << width << endl;
	}
	virtual void Save()const
	{
		ofstream fout(name_file);
		if (fout.is_open())
		{
			fout << x << endl;
			fout << y << endl;
			fout << height << endl;
			fout << width << endl;
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
				fin >> height;
				fin >> width;
			}
		}
		else
		{
			cout << "file not open!" << endl;
		}
		fin.close();
	}
};


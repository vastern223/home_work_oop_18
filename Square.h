#pragma once
#include"Shape.h"

class Square : public Shape
{
private:
	string name_file = "Square.txt";
	int x;
	int y;
	float side_length;
public:
	Square() :x(0), y(0), side_length(0) { }
	Square(int x, int y, float side_length) : x(x), y(y), side_length(side_length) { }

	virtual void Show()const
	{
		cout << "The coordinate of the upper left corner: " << x << "," << y << endl;
		cout << "Side length: " << side_length << endl;
	}
	virtual void Save()const
	{
		ofstream fout(name_file);
		if (fout.is_open())
		{
			fout << x << endl;
			fout << y << endl;
			fout << side_length << endl;
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
				fin >>  x;
				fin >>  y;
				fin >> side_length;
			}	
		}
		else
		{
			cout << "file not open!" << endl;
		}
		fin.close();
	}
};


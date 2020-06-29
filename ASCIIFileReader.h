#pragma once
#include"FileReader.h"

class ASCIIFileReader : public FileReader
{
public: 

	virtual void Display(string path)
	{
		ifstream fin(path);
		if (fin.is_open())
		{
			char variable;
			while (fin.get(variable))
			{
				cout << (int)variable << " ";
			}
		}
		else
		{
			cout << "file not open!" << endl;
		}
		fin.close();
	}

};


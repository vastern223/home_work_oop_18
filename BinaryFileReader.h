#pragma once
#include"FileReader.h"
#include <bitset>

class BinaryFileReader : public FileReader
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
				bitset<8> bs(variable);
				cout << bs << " ";
			}
		}
		else
		{
			cout << "file not open!" << endl;
		}
		fin.close();
	}
};





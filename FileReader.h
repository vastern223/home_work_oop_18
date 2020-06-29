#pragma once
#include<iostream>
#include<fstream>
using namespace std;

class FileReader
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
				cout << variable;
			}
		}
		else
		{
			cout << "file not open!" << endl;
		}
		fin.close();
		
	}

};


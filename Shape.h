#pragma once
#include<fstream>
#include<iostream>
using namespace std;
class Shape
{
public:
	virtual void Show()const = 0;
	virtual void Save()const = 0;
	virtual void Load() = 0;
};


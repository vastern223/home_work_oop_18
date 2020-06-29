#include<iostream>
#include"FileReader.h"
#include"ASCIIFileReader.h"
#include"BinaryFileReader.h"
#include"Shape.h"
#include"Square.h"
#include"Rectangle.h"
#include"Circle.h"
#include"Ellipse.h"
using namespace std;

int main()
{
    //нерозбивав на cpp. файли бо подумав що немає смисла 
    Shape* shape[4]
    {
        new Square(2,3, 7),
        new Rectangle(7, 1, 2, 0),
        new Circle(2, 3, 1.3),
        new Ellipse(4, 3, 3, 2)
    };

    for (int i = 0; i < 4; i++)
    {
        shape[i]->Save();
    }

    Shape* shape1[4]
    {
            new Square,
            new Rectangle,
            new Circle,
            new Ellipse
    };

    for (int i = 0; i < 4; i++)
    {
        shape1[i]->Load();
        shape1[i]->Show();
    }


	system("pause");
	return 0;
}
// CLocation.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class CLocation
{
private:
	int x;
	int y;
public:
	void init(int xx = 0, int yy = 0)
	{
		x = xx;
		y = yy;
	};
	void valueX(int val)
	{
		x = val;
	}
	int valueX()
	{
		return x;
	}
	void display()
	{
		cout << "x=" << x << "  y=" << y << endl;
	}
};

int main()
{

	CLocation ol;
	int m;
	ol.init(100, 200);
	ol.valueX(500);
	ol.display();
	m = ol.valueX();
	cout << "   m=" << m << endl;
    return 0;
}


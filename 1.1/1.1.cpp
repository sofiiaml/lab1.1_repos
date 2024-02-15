//1.1.cpp
#include <iostream>
#include "Cursor.h"
using namespace std;

Cursor makeCursor(int x, int y)
{
	Cursor c;
	if (!c.Init(x, y)) {
		cout << "Wrong arguments to Init!" << endl;
	}
	return c;
}
int main() {
	Cursor c;
	c.Read();
	c.ChangeX(500);
	c.ChangeY(200);
	c.Display();
	int x, y;
	cout << "Input location of cursor:" << endl << endl;
	cout << " x = "; cin >> x;
	cout << " y = "; cin >> y;
	c = makeCursor(x, y);
	if (!c.Init(x, y))
		return NULL;
	c.Display();
	return 0;
}

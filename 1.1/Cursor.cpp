// Cursor.cpp
# include "Cursor.h"

int Cursor::getFirst() {
	return first;
}
int Cursor::getSecond() {
	return second;
}
void Cursor::ChangeX(int x) {
	if (x >= 0 && x <= 1920) {
		first = x;
	}
}
void Cursor::ChangeY(int y) {
	if (y >= 0 && y <= 1080) {
		second = y;
	}
}
bool Cursor::Init(int x, int y) {
	if (x >= 0 && x <= 1920 && y >= 0 && y <= 1080) {
		first = x;
		second = y;
		return true;
	}
	else {
		return false;
	}
}
void Cursor::Read() {
	int x, y;
	do
	{
		cout << "Input location of cursor:" << endl;
		cout << " x = "; cin >> x;
		cout << " y = "; cin >> y;
	} while (!Init(x, y));
	first = x;
	second = y;
}
void Cursor::Display() const {
	cout << endl;
	cout << " x = " << first << endl;
	cout << " y = " << second << endl;

}
// Cursor.h
# pragma once
# include <iostream>

using namespace std;

class Cursor {
private:
	int first;
	int second;
public:
	int getFirst();
	int getSecond();
	void ChangeX(int x);
	void ChangeY(int y);
	bool Init(int x, int y);
	void Read();
	void Display() const;
};

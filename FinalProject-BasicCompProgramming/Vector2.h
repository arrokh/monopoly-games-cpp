#pragma once
class Vector2
{
public:
	int x,
		y,
		id;
	Vector2();
	~Vector2();
	Vector2(int, int, int _id = 0);
	void Set(int, int, int);
	void TracePos(char _pos = 'a');

private:

};


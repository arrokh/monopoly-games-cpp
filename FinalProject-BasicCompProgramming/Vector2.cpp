#include "stdafx.h"

Vector2::Vector2()
{
	id = 0;
}

Vector2::~Vector2()
{
}

Vector2::Vector2(int _x, int _y, int _id)
{
	Vector2::Set(_x, _y, _id);
}

void Vector2::Set(int _x, int _y, int _id)
{
	x = _x;
	y = _y;
	id = _id;
}

void Vector2::TracePos(char _pos)
{
	int setW = 5;
	switch (_pos)
	{
	case 'a':
		cout <<
			"|x  : " <<
			setiosflags(ios::left) << setw(setW) << x <<
			"|y  : " <<
			setiosflags(ios::left) << setw(setW) << y <<
			"|id : " <<
			setiosflags(ios::left) << setw(setW) << id;
		break;
	case 'x':
		std::cout << "x : " << x;
		break;
	case 'y':
		std::cout << "y : " << y;
		break;
	case 'i':
		std::cout << "id : " << id;
		break;
	default:
		break;
	}
}
#pragma once
#include "Vector2.h"

class Cards
{
public:
	
	string name;
	char plotCode;
	int id,
		buy,
		rentLand,
		rentHouse1,
		rentHouse2,
		rentHouse3,
		rentHouse4,
		rentHotel,
		buyHouse,
		buyHotel,
		hipotik;
	enum Price
	{
		BUY = 0,
		RENT_LAND = 1,
		RENT_HOUSE_1 = 2,
		RENT_HOUSE_2 = 3,
		RENT_HOUSE_3 = 4,
		RENT_HOUSE_4 = 5,
		RENT_HOTEL = 6,
		BUY_HOUSE = 7,
		BUY_HOTEL = 8,
		HIPOTIK = 9

	}price;
	Cards();
	~Cards();
	void Set(int, int, int, int, int, int, int, int, int, int);
	int Get(Price);
	void Print(const Cards*);
	void Draw();

private:
	Vector2 mPosStage[40];
};

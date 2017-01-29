#include "stdafx.h"

Cards::Cards()
{

}

Cards::~Cards()
{
}

void Cards::Set(
	int _buy,
	int _rentLand,
	int _rentHouse1,
	int _rentHouse2,
	int _rentHouse3,
	int _rentHouse4,
	int _rentHotel,
	int _buyHouse,
	int _buyHotel,
	int _hipotik)
{
	buy = _buy;
	rentLand = _rentLand;
	rentHouse1 = _rentHouse1;
	rentHouse2 = _rentHouse2;
	rentHouse3 = _rentHouse3;
	rentHouse4 = _rentHouse4;
	rentHotel = _rentHotel;
	buyHouse = _buyHouse;
	buyHotel = _buyHotel;
	hipotik = _hipotik;
}

int Cards::Get(Price price)
{
	switch (price)
	{
	case Cards::BUY:
		return buy;
		break;
	case Cards::RENT_HOUSE_1:
		return rentHouse1;
		break;
	case Cards::RENT_HOUSE_2:
		return rentHouse2;
		break;
	case Cards::RENT_HOUSE_3:
		return rentHouse3;
		break;
	case Cards::RENT_HOUSE_4:
		return rentHouse4;
		break;
	case Cards::RENT_HOTEL:
		return rentHotel;
		break;
	case Cards::BUY_HOUSE:
		return buyHouse;
		break;
	case Cards::BUY_HOTEL:
		return buyHotel;
		break;
	case Cards::HIPOTIK:
		return hipotik;
		break;
	default:
		//return 0;
		break;
	}
}

void Cards::Print(const Cards* _cards)
{
	int setW = 5;
	cout <<
		" Id : " <<
		setiosflags(ios::left) << setw(setW) << (*_cards).id <<
		" Buy : " <<
		setiosflags(ios::left) << setw(setW) << (*_cards).buy <<
		" Name : " <<
		setiosflags(ios::left) << setw(setW) << (*_cards).name <<
		" Plot Code : " <<
		setiosflags(ios::left) << setw(setW) << (*_cards).plotCode;
}

void Cards::Draw()
{
	char BoxCards[24][27] =
	{
		"qeeeeeeeeeeeeeeeeeeeeeeeew",
		"d                        d",
		"d   p                    d",
		"d   o                    d",
		"d   i                    d",
		"d                        d",
		"teeeeeeeeeeeeeeeeeeeeeeeeg",
		"d l                      d",
		"d k                      d",
		"d j                      d",
		"d h                      d",
		"d m                      d",
		"d n                      d",
		"d                        d",
		"d L                      d",
		"d K                      d",
		"d                        d",
		"d J                      d",
		"d H                      d",
		"d M                      d",
		"d                        d",
		"d N                      d",
		"aeeeeeeeeeeeeeeeeeeeeeeees"
	};
	for (int i = 0; i < 24; i++)
	{
		for (int j = 0; j < 27; j++)
		{
			GameSystem().GotoPos(j + 117, i);
			switch (BoxCards[i][j])
			{
			case 'q':
				cout << char(201);
				break;
			case 'w':
				cout << char(187);
				break;
			case 's':
				cout << char(188);
				break;
			case 'a':
				cout << char(200);
				break;
			case 'e':
				cout << char(205);
				break;
			case 'd':
				cout << char(186);
				break;
			case 't':
				cout << char(204);
				break;
			case 'g':
				cout << char(185);
				break;
			case 'p':
				cout << "Kartu Hak Milik | " << plotCode;
				break;
			case 'o':
				cout << resetiosflags(ios::right) << 
					setiosflags(ios::left) << setw(19) << name;
				break;
			case 'i':
				cout << "\t$" << setiosflags(ios::right) << setw(10) << buy;
				break;
			case 'l':
				cout << "Harga Sewa";
				break;
			case 'k':
				cout << 
					resetiosflags(ios::right) <<
					setiosflags(ios::left) << setw(13) << "Harga Tanah" <<
					setw(1) << "$" <<
					setiosflags(ios::right) << setw(7) << rentLand;
				break;
			case 'j':
				cout <<
					resetiosflags(ios::right) <<
					setiosflags(ios::left) << setw(13) << "1 Rumah" <<
					setw(1) << "$" <<
					setiosflags(ios::right) << setw(7) << rentHouse1;
				break;
			case 'h':
				cout <<
					resetiosflags(ios::right) <<
					setiosflags(ios::left) << setw(13) << "2 Rumah" <<
					setw(1) << "$" <<
					setiosflags(ios::right) << setw(7) << rentHouse2;
				break;
			case 'm':
				cout <<
					resetiosflags(ios::right) <<
					setiosflags(ios::left) << setw(13) << "3 Rumah" <<
					setw(1) << "$" <<
					setiosflags(ios::right) << setw(7) << rentHouse3;
				break;
			case 'n':
				cout <<
					resetiosflags(ios::right) <<
					setiosflags(ios::left) << setw(13) << "4 Rumah" <<
					setw(1) << "$" <<
					setiosflags(ios::right) << setw(7) << rentHouse4;
				break;
			case 'b':
				cout <<
					resetiosflags(ios::right) <<
					setiosflags(ios::left) << setw(13) << "1 Hotel" <<
					setw(1) << "$" <<
					setiosflags(ios::right) << setw(7) << rentHotel;
				break;
			case 'L':
				cout <<
					resetiosflags(ios::right) <<
					setiosflags(ios::left) << "Memiliki 1 kompleks";
				break;
			case 'K':
				cout <<
					resetiosflags(ios::right) <<
					setiosflags(ios::left) << "harga sewa 2x lipat";
				break;
			case 'J':
				cout <<
					setiosflags(ios::left) << setw(13) << "Harga 1 Rumah" <<
					setw(1) << "$" <<
					setiosflags(ios::right) << setw(7) << buyHouse;
				break;
			case 'H':
				cout <<
					resetiosflags(ios::right) <<
					setiosflags(ios::left) << setw(13) << "Harga 1 Hotel" <<
					setw(1) << "$" <<
					setiosflags(ios::right) << setw(7) << buyHotel;
				break;
			case 'M':
				cout <<
					resetiosflags(ios::right) <<
					setiosflags(ios::left) << setw(13) << "Harga Hipotik" <<
					setw(1) << "$" <<
					setiosflags(ios::right) << setw(7) << hipotik;
				break;
			case 'N':
				cout <<
					setw(19) << "Id" <<
					setiosflags(ios::right) << setw(2) << id <<
					resetiosflags(ios::right);
				break;
			default:
				break;
			}
		}
		cout << endl;
	}
}
